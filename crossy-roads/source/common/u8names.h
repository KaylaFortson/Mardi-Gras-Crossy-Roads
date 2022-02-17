//////////////////////////////////////////////////////////////////////////////
//
//  --- u8names.h ---
//
//////////////////////////////////////////////////////////////////////////////

#ifndef hg_SourceCommon_u8names_h_
#define hg_SourceCommon_u8names_h_

#include <string>

/**
  Convert a UTF-8 encoded file name to a wchar_t-based filename
    for use with _wfopen.
  @param nm file name to convert
  @param[out] out wchar_t file name written here
  @return zero on success, nonzero on conversion error
**/
int u8names_towc(const char* nm, std::wstring& out);

#endif //hg_SourceCommon_u8names_h_