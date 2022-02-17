//////////////////////////////////////////////////////////////////////////////
//
//  --- u8names.cpp ---
//
//////////////////////////////////////////////////////////////////////////////

#include "u8names.h"
#include <errno.h>

static
unsigned int u8names_bytecount(unsigned char lead_ch) {
  if (lead_ch < 0xC0) {
    errno = EILSEQ;
    return 1;
  }
  else if (lead_ch < 0xE0)
    return 2;
  else if (lead_ch < 0xF0)
    return 3;
  else if (lead_ch < 0xF8)
    return 4;
  else {
    errno = EILSEQ;
    return 1;
  }
}

int u8names_towc(const char* nm, std::wstring& out) {
  const unsigned char* p;
  for (p = reinterpret_cast<const unsigned char*>(nm); *p; ++p) {
    const unsigned char v = *p;
    if (v < 0x80) {
      /* Latin-1 compatibility */
      out.push_back(v);
    }
    else if (v < 0xC0) {
      errno = EILSEQ;
      return EILSEQ;
    }
    else {
      const unsigned int i_count = u8names_bytecount(v);
      if (i_count == 1) {
        return EILSEQ;
      }
      /* check extension codes */
      unsigned int i;
      unsigned long int qv = v & (31u >> (i_count - 2u));
      for (i = 1; i < i_count; ++i) {
        unsigned char const v1 = *(p + i);
        if (v1 < 0x80 || v1 >= 0xC0) {
          errno = EILSEQ;
          return EILSEQ;
        }
        else qv = (qv << 6) | (v1 & 63);
      }
      if (qv >= 0x10000) {
        const unsigned long int qv_m1 = qv - 0x10000;
        out.push_back(static_cast<wchar_t>(0xD800 | ((qv_m1 >> 10) & 1023)));
        out.push_back(static_cast<wchar_t>(0xDC00 | (qv_m1 & 1023)));
      }
      else out.push_back(static_cast<wchar_t>(qv));
      p += i_count - 1;
    }
  }
  return 0;
}
