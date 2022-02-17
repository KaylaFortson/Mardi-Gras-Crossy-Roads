#version 150

in vec4 vPos;
in vec4 vColor;
uniform mat4 M;
out vec4 color;

void
main()
{
  gl_Position = M*vPos;
  color = vColor;
}
