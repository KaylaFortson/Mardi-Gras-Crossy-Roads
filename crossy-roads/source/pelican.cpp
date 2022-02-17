//
//  pelican.cpp
//  
//
//  Created by Marisa Madelyn Long on 11/2/21.
//

#include "common.h"

//Ship constructor
Pelican::Pelican() {
    // Pelican vertices, keep track of outline
    //left leg
    pelican_vert[0] = vec2(0.0, -53.0); //outside
    pelican_vert[1] = vec2(1.0, -53.0); //outside
    pelican_vert[2] = vec2(1.0, -52.0);
    pelican_vert[3] = vec2(0.0, -53.0); //outside
    
    pelican_vert[4] = vec2(1.0, -53.0); //outside
    pelican_vert[5] = vec2(1.0, -52.0);
    pelican_vert[6] = vec2(2.0, -52.0);
    pelican_vert[7] = vec2(1.0, -53.0);
    
    pelican_vert[8] = vec2(1.0, -52.0);
    pelican_vert[9] = vec2(2.0, -52.0);
    pelican_vert[10] = vec2(2.0, -51.0);
    pelican_vert[11] = vec2(1.0, -52.0);
    
    pelican_vert[12] = vec2(1.0, -52.0);
    pelican_vert[13] = vec2(2.0, -51.0);
    pelican_vert[14] = vec2(1.0, -51.0);
    pelican_vert[15] = vec2(1.0, -52.0);
    
    pelican_vert[16] = vec2(1.0, -51.0);
    pelican_vert[17] = vec2(2.0, -51.0);
    pelican_vert[18] = vec2(2.0, -50.0);
    pelican_vert[19] = vec2(1.0, -51.0);
    
    pelican_vert[20] = vec2(1.0, -51.0);
    pelican_vert[21] = vec2(2.0, -50.0);
    pelican_vert[22] = vec2(1.0, -50.0);
    pelican_vert[23] = vec2(1.0, -51.0);
    
    //right leg
    pelican_vert[24] = vec2(2.0, -53.0);
    pelican_vert[25] = vec2(3.0, -53.0);
    pelican_vert[26] = vec2(3.0, -52.0);
    pelican_vert[27] = vec2(2.0, -53.0);
    
    pelican_vert[28] = vec2(3.0, -53.0);
    pelican_vert[29] = vec2(3.0, -52.0);
    pelican_vert[30] = vec2(4.0, -52.0);
    pelican_vert[31] = vec2(3.0, -53.0);
    
    pelican_vert[32] = vec2(3.0, -52.0);
    pelican_vert[33] = vec2(4.0, -52.0);
    pelican_vert[34] = vec2(4.0, -51.0);
    pelican_vert[35] = vec2(3.0, -52.0);
    
    pelican_vert[36] = vec2(3.0, -52.0);
    pelican_vert[37] = vec2(4.0, -51.0);
    pelican_vert[38] = vec2(3.0, -51.0);
    pelican_vert[39] = vec2(3.0, -52.0);
    
    pelican_vert[40] = vec2(3.0, -51.0);
    pelican_vert[41] = vec2(4.0, -51.0);
    pelican_vert[42] = vec2(4.0, -50.0);
    pelican_vert[43] = vec2(3.0, -51.0);
    
    pelican_vert[44] = vec2(3.0, -51.0);
    pelican_vert[45] = vec2(4.0, -50.0);
    pelican_vert[46] = vec2(3.0, -50.0);
    pelican_vert[47] = vec2(3.0, -51.0);

    //body
    pelican_vert[48] = vec2(0.0, -50.0);
    pelican_vert[49] = vec2(5.0, -45.0);
    pelican_vert[50] = vec2(0.0, -45.0);
    pelican_vert[51] = vec2(0.0, -50.0);
    
    pelican_vert[52] = vec2(0.0, -50.0);
    pelican_vert[53] = vec2(5.0, -50.0);
    pelican_vert[54] = vec2(5.0, -45.0);
    pelican_vert[55] = vec2(0.0, -50.0);
    
    //neck
    pelican_vert[56] = vec2(1.0, -46.0);
    pelican_vert[57] = vec2(2.0, -46.0);
    pelican_vert[58] = vec2(2.0, -44.0);
    pelican_vert[59] = vec2(1.0, -46.0);
    
    pelican_vert[60] = vec2(1.0, -46.0);
    pelican_vert[61] = vec2(2.0, -44.0);
    pelican_vert[62] = vec2(1.0, -44.0);
    pelican_vert[63] = vec2(1.0, -46.0);
    
    //head
    pelican_vert[64] = vec2(1.0, -44.0);
    pelican_vert[65] = vec2(4.0, -44.0);
    pelican_vert[66] = vec2(4.0, -41.0);
    pelican_vert[67] = vec2(1.0, -44.0);
    
    pelican_vert[68] = vec2(1.0, -44.0);
    pelican_vert[69] = vec2(4.0, -41.0);
    pelican_vert[70] = vec2(1.0, -41.0);
    pelican_vert[71] = vec2(1.0, -44.0);
    
    //beak
    pelican_vert[72] = vec2(-1.0, -44.0);
    pelican_vert[73] = vec2(1.0, -44.0);
    pelican_vert[74] = vec2(1.0, -42.0);
    pelican_vert[75] = vec2(-1.0, -44.0);
    
    pelican_vert[76] = vec2(-1.0, -44.0);
    pelican_vert[77] = vec2(1.0, -42.0);
    pelican_vert[78] = vec2(-1.0, -42.0);
    pelican_vert[79] = vec2(-1.0, -44.0);

    pelican_vert[80] = vec2(-2.0, -43.0);
    pelican_vert[81] = vec2(-1.0, -43.0);
    pelican_vert[82] = vec2(-1.0, -42.0);
    pelican_vert[83] = vec2(-2.0, -43.0);
    
    pelican_vert[84] = vec2(-2.0, -43.0);
    pelican_vert[85] = vec2(-1.0, -42.0);
    pelican_vert[86] = vec2(-2.0, -42.0);
    pelican_vert[87] = vec2(-2.0, -43.0);
    
    //left wing
    pelican_vert[88] = vec2(-1.0, -49.0);
    pelican_vert[89] = vec2(0.0, -49.0);
    pelican_vert[90] = vec2(0.0, -46.0);
    pelican_vert[91] = vec2(-1.0, -49.0);
    
    pelican_vert[92] = vec2(-1.0, -49.0);
    pelican_vert[93] = vec2(0.0, -46.0);
    pelican_vert[94] = vec2(-1.0, -46.0);
    pelican_vert[95] = vec2(-1.0, -49.0);
    
    pelican_vert[96] = vec2(-2.0, -48.0);
    pelican_vert[97] = vec2(-1.0, -48.0);
    pelican_vert[98] = vec2(-1.0, -46.0);
    pelican_vert[99] = vec2(-2.0, -48.0);
    
    pelican_vert[100] = vec2(-2.0, -48.0);
    pelican_vert[101] = vec2(-1.0, -46.0);
    pelican_vert[102] = vec2(-2.0, -46.0);
    pelican_vert[103] = vec2(-2.0, -48.0);

    pelican_vert[104] = vec2(-3.0, -47.0);
    pelican_vert[105] = vec2(-2.0, -47.0);
    pelican_vert[106] = vec2(-2.0, -46.0);
    pelican_vert[107] = vec2(-3.0, -47.0);
    
    pelican_vert[108] = vec2(-3.0, -47.0);
    pelican_vert[109] = vec2(-2.0, -46.0);
    pelican_vert[110] = vec2(-3.0, -46.0);
    pelican_vert[111] = vec2(-3.0, -47.0);
    
    //right wing
    pelican_vert[112] = vec2(5.0, -49.0);
    pelican_vert[113] = vec2(6.0, -49.0);
    pelican_vert[114] = vec2(6.0, -46.0);
    pelican_vert[115] = vec2(5.0, -49.0);
    
    pelican_vert[116] = vec2(5.0, -49.0);
    pelican_vert[117] = vec2(6.0, -46.0);
    pelican_vert[118] = vec2(5.0, -46.0);
    pelican_vert[119] = vec2(5.0, -49.0);
    
    pelican_vert[120] = vec2(6.0, -48.0);
    pelican_vert[121] = vec2(7.0, -48.0);
    pelican_vert[122] = vec2(7.0, -46.0);
    pelican_vert[123] = vec2(6.0, -48.0);
    
    pelican_vert[124] = vec2(6.0, -48.0);
    pelican_vert[125] = vec2(7.0, -46.0);
    pelican_vert[126] = vec2(6.0, -46.0);
    pelican_vert[127] = vec2(6.0, -48.0);

    pelican_vert[128] = vec2(7.0, -47.0);
    pelican_vert[129] = vec2(8.0, -47.0);
    pelican_vert[130] = vec2(8.0, -46.0);
    pelican_vert[131] = vec2(7.0, -47.0);
    
    pelican_vert[132] = vec2(7.0, -47.0);
    pelican_vert[133] = vec2(8.0, -46.0);
    pelican_vert[134] = vec2(7.0, -46.0);
    pelican_vert[135] = vec2(7.0, -47.0);
    
    //eye
    pelican_vert[136] = vec2(2.5, -42.5);
    
    // Pelican colors
    //white = 1.0, 1.0, 1.0
    //orange = 1.0, 0.7, 0.0
    
    //left leg
    pelican_color[0] = vec3(1.0, 0.7, 0.0);
    pelican_color[1] = vec3(1.0, 0.7, 0.0);
    pelican_color[2] = vec3(1.0, 0.7, 0.0);
    pelican_color[3] = vec3(1.0, 0.7, 0.0);
    pelican_color[4] = vec3(1.0, 0.7, 0.0);
    pelican_color[5] = vec3(1.0, 0.7, 0.0);
    pelican_color[6] = vec3(1.0, 0.7, 0.0);
    pelican_color[7] = vec3(1.0, 0.7, 0.0);
    pelican_color[8] = vec3(1.0, 0.7, 0.0);
    pelican_color[9] = vec3(1.0, 0.7, 0.0);
    pelican_color[10] = vec3(1.0, 0.7, 0.0);
    pelican_color[11] = vec3(1.0, 0.7, 0.0);
    pelican_color[12] = vec3(1.0, 0.7, 0.0);
    pelican_color[13] = vec3(1.0, 0.7, 0.0);
    pelican_color[14] = vec3(1.0, 0.7, 0.0);
    pelican_color[15] = vec3(1.0, 0.7, 0.0);
    pelican_color[16] = vec3(1.0, 0.7, 0.0);
    pelican_color[17] = vec3(1.0, 0.7, 0.0);
    pelican_color[18] = vec3(1.0, 0.7, 0.0);
    pelican_color[19] = vec3(1.0, 0.7, 0.0);
    pelican_color[20] = vec3(1.0, 0.7, 0.0);
    pelican_color[21] = vec3(1.0, 0.7, 0.0);
    pelican_color[22] = vec3(1.0, 0.7, 0.0);
    pelican_color[23] = vec3(1.0, 0.7, 0.0);
    
    //right leg
    pelican_color[24] = vec3(1.0, 0.7, 0.0);
    pelican_color[25] = vec3(1.0, 0.7, 0.0);
    pelican_color[26] = vec3(1.0, 0.7, 0.0);
    pelican_color[27] = vec3(1.0, 0.7, 0.0);
    pelican_color[28] = vec3(1.0, 0.7, 0.0);
    pelican_color[29] = vec3(1.0, 0.7, 0.0);
    pelican_color[30] = vec3(1.0, 0.7, 0.0);
    pelican_color[31] = vec3(1.0, 0.7, 0.0);
    pelican_color[32] = vec3(1.0, 0.7, 0.0);
    pelican_color[33] = vec3(1.0, 0.7, 0.0);
    pelican_color[34] = vec3(1.0, 0.7, 0.0);
    pelican_color[35] = vec3(1.0, 0.7, 0.0);
    pelican_color[36] = vec3(1.0, 0.7, 0.0);
    pelican_color[37] = vec3(1.0, 0.7, 0.0);
    pelican_color[38] = vec3(1.0, 0.7, 0.0);
    pelican_color[39] = vec3(1.0, 0.7, 0.0);
    pelican_color[40] = vec3(1.0, 0.7, 0.0);
    pelican_color[41] = vec3(1.0, 0.7, 0.0);
    pelican_color[42] = vec3(1.0, 0.7, 0.0);
    pelican_color[43] = vec3(1.0, 0.7, 0.0);
    pelican_color[44] = vec3(1.0, 0.7, 0.0);
    pelican_color[45] = vec3(1.0, 0.7, 0.0);
    pelican_color[46] = vec3(1.0, 0.7, 0.0);
    pelican_color[47] = vec3(1.0, 0.7, 0.0);
    
    //body
    pelican_color[48] = vec3(1.0, 1.0, 1.0);
    pelican_color[49] = vec3(1.0, 1.0, 1.0);
    pelican_color[50] = vec3(1.0, 1.0, 1.0);
    pelican_color[51] = vec3(1.0, 1.0, 1.0);
    pelican_color[52] = vec3(1.0, 1.0, 1.0);
    pelican_color[53] = vec3(1.0, 1.0, 1.0);
    pelican_color[54] = vec3(1.0, 1.0, 1.0);
    pelican_color[55] = vec3(1.0, 1.0, 1.0);
    
    //neck
    pelican_color[56] = vec3(1.0, 1.0, 1.0);
    pelican_color[57] = vec3(1.0, 1.0, 1.0);
    pelican_color[58] = vec3(1.0, 1.0, 1.0);
    pelican_color[59] = vec3(1.0, 1.0, 1.0);
    pelican_color[60] = vec3(1.0, 1.0, 1.0);
    pelican_color[61] = vec3(1.0, 1.0, 1.0);
    pelican_color[62] = vec3(1.0, 1.0, 1.0);
    pelican_color[63] = vec3(1.0, 1.0, 1.0);
    
    //head
    pelican_color[64] = vec3(1.0, 1.0, 1.0);
    pelican_color[65] = vec3(1.0, 1.0, 1.0);
    pelican_color[66] = vec3(1.0, 1.0, 1.0);
    pelican_color[67] = vec3(1.0, 1.0, 1.0);
    pelican_color[68] = vec3(1.0, 1.0, 1.0);
    pelican_color[69] = vec3(1.0, 1.0, 1.0);
    pelican_color[70] = vec3(1.0, 1.0, 1.0);
    pelican_color[71] = vec3(1.0, 1.0, 1.0);
    
    //beak
    pelican_color[72] = vec3(1.0, 0.7, 0.0);
    pelican_color[73] = vec3(1.0, 0.7, 0.0);
    pelican_color[74] = vec3(1.0, 0.7, 0.0);
    pelican_color[75] = vec3(1.0, 0.7, 0.0);
    pelican_color[76] = vec3(1.0, 0.7, 0.0);
    pelican_color[77] = vec3(1.0, 0.7, 0.0);
    pelican_color[78] = vec3(1.0, 0.7, 0.0);
    pelican_color[79] = vec3(1.0, 0.7, 0.0);
    pelican_color[80] = vec3(1.0, 0.7, 0.0);
    pelican_color[81] = vec3(1.0, 0.7, 0.0);
    pelican_color[82] = vec3(1.0, 0.7, 0.0);
    pelican_color[83] = vec3(1.0, 0.7, 0.0);
    pelican_color[84] = vec3(1.0, 0.7, 0.0);
    pelican_color[85] = vec3(1.0, 0.7, 0.0);
    pelican_color[86] = vec3(1.0, 0.7, 0.0);
    pelican_color[87] = vec3(1.0, 0.7, 0.0);
    
    //left wing
    pelican_color[88] = vec3(1.0, 1.0, 1.0);
    pelican_color[89] = vec3(1.0, 1.0, 1.0);
    pelican_color[90] = vec3(1.0, 1.0, 1.0);
    pelican_color[91] = vec3(1.0, 1.0, 1.0);
    pelican_color[92] = vec3(1.0, 1.0, 1.0);
    pelican_color[93] = vec3(1.0, 1.0, 1.0);
    pelican_color[94] = vec3(1.0, 1.0, 1.0);
    pelican_color[95] = vec3(1.0, 1.0, 1.0);
    pelican_color[96] = vec3(1.0, 1.0, 1.0);
    pelican_color[97] = vec3(1.0, 1.0, 1.0);
    pelican_color[98] = vec3(1.0, 1.0, 1.0);
    pelican_color[99] = vec3(1.0, 1.0, 1.0);
    pelican_color[100] = vec3(1.0, 1.0, 1.0);
    pelican_color[101] = vec3(1.0, 1.0, 1.0);
    pelican_color[102] = vec3(1.0, 1.0, 1.0);
    pelican_color[103] = vec3(1.0, 1.0, 1.0);
    pelican_color[104] = vec3(1.0, 1.0, 1.0);
    pelican_color[105] = vec3(1.0, 1.0, 1.0);
    pelican_color[106] = vec3(1.0, 1.0, 1.0);
    pelican_color[107] = vec3(1.0, 1.0, 1.0);
    pelican_color[108] = vec3(1.0, 1.0, 1.0);
    pelican_color[109] = vec3(1.0, 1.0, 1.0);
    pelican_color[110] = vec3(1.0, 1.0, 1.0);
    pelican_color[111] = vec3(1.0, 1.0, 1.0);
    pelican_color[112] = vec3(1.0, 1.0, 1.0);
    
    //right wing
    pelican_color[113] = vec3(1.0, 1.0, 1.0);
    pelican_color[114] = vec3(1.0, 1.0, 1.0);
    pelican_color[115] = vec3(1.0, 1.0, 1.0);
    pelican_color[116] = vec3(1.0, 1.0, 1.0);
    pelican_color[117] = vec3(1.0, 1.0, 1.0);
    pelican_color[118] = vec3(1.0, 1.0, 1.0);
    pelican_color[119] = vec3(1.0, 1.0, 1.0);
    pelican_color[120] = vec3(1.0, 1.0, 1.0);
    pelican_color[121] = vec3(1.0, 1.0, 1.0);
    pelican_color[122] = vec3(1.0, 1.0, 1.0);
    pelican_color[123] = vec3(1.0, 1.0, 1.0);
    pelican_color[124] = vec3(1.0, 1.0, 1.0);
    pelican_color[125] = vec3(1.0, 1.0, 1.0);
    pelican_color[126] = vec3(1.0, 1.0, 1.0);
    pelican_color[127] = vec3(1.0, 1.0, 1.0);
    pelican_color[128] = vec3(1.0, 1.0, 1.0);
    pelican_color[129] = vec3(1.0, 1.0, 1.0);
    pelican_color[130] = vec3(1.0, 1.0, 1.0);
    pelican_color[131] = vec3(1.0, 1.0, 1.0);
    pelican_color[132] = vec3(1.0, 1.0, 1.0);
    pelican_color[133] = vec3(1.0, 1.0, 1.0);
    pelican_color[134] = vec3(1.0, 1.0, 1.0);
    pelican_color[135] = vec3(1.0, 1.0, 1.0);
    
    //eye
    pelican_color[136] = vec3(0.0, 0.0, 0.0);
    
    //outline
    pelican_outside[0] = vec2(0, -53);
    pelican_outside[1] = vec2(1, -52);
    pelican_outside[2] = vec2(1, -50);
    pelican_outside[3] = vec2(0, -50);
    pelican_outside[4] = vec2(0,  -46);
    pelican_outside[5] = vec2(1, -46);
    pelican_outside[6] = vec2(1, -44);
    pelican_outside[7] = vec2(-1, -44);
    pelican_outside[8] = vec2(-1, -43);
    pelican_outside[9] = vec2(-2, -43);
    pelican_outside[11] = vec2(-2, -42);
    pelican_outside[12] = vec2(1, -42);
    pelican_outside[13] = vec2(1, -41);
    pelican_outside[14] = vec2(4, -41);
    pelican_outside[15] = vec2(4,  -44);
    pelican_outside[16] = vec2(3, -44);
    pelican_outside[17] = vec2(3,  -46);
    pelican_outside[18] = vec2(5, -46);
    pelican_outside[19] = vec2(5, -50);
    pelican_outside[20] = vec2(4, -50);
    pelican_outside[21] = vec2(4, -52);
    pelican_outside[22] = vec2(3, -53);
    
};



    

//Called everytime an animation tick happens
void Pelican::update_state() {
    state.cur_location = state.velocity;
    state.ModelView = state.ModelView * Translate(state.cur_location.x, state.cur_location.y, 0);
   
    //wrap
    vec4 current = state.ModelView * vec4(2.5, -47, 0, 1);
    if (current.x >= 55) {
        state.ModelView = Translate(-110, 0, 0) * state.ModelView;
    }
    if (current.x <= -55) {
        state.ModelView = Translate(110, 0, 0) * state.ModelView;
    }

}

//Initialize the gl state and variables
void Pelican::gl_init() {

    std::string vshader = shader_path + "vshader.glsl";
    std::string fshader = shader_path + "fshader.glsl";

    GLchar* vertex_shader_source = readShaderSource(vshader.c_str());
    GLchar* fragment_shader_source = readShaderSource(fshader.c_str());

    GLvars.vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(GLvars.vertex_shader, 1, (const GLchar**)&vertex_shader_source, NULL);
    glCompileShader(GLvars.vertex_shader);
    check_shader_compilation(vshader, GLvars.vertex_shader);

    GLvars.fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(GLvars.fragment_shader, 1, (const GLchar**)&fragment_shader_source, NULL);
    glCompileShader(GLvars.fragment_shader);
    check_shader_compilation(fshader, GLvars.fragment_shader);

    GLvars.program = glCreateProgram();
    glAttachShader(GLvars.program, GLvars.vertex_shader);
    glAttachShader(GLvars.program, GLvars.fragment_shader);

    glLinkProgram(GLvars.program);
    check_program_link(GLvars.program);

    glBindFragDataLocation(GLvars.program, 0, "fragColor");

    GLvars.vpos_location = glGetAttribLocation(GLvars.program, "vPos");
    GLvars.vcolor_location = glGetAttribLocation(GLvars.program, "vColor");
    GLvars.M_location = glGetUniformLocation(GLvars.program, "M");

    // Create a vertex array object
    glGenVertexArrays(1, &GLvars.vao);
    //Set GL state to use vertex array object
    glBindVertexArray(GLvars.vao);

    //Generate buffer to hold our vertex data
    glGenBuffers(1, &GLvars.buffer);
    //Set GL state to use this buffer
    glBindBuffer(GL_ARRAY_BUFFER, GLvars.buffer);

    //Create GPU buffer to hold vertices and color
    glBufferData(GL_ARRAY_BUFFER, sizeof(pelican_vert) + sizeof(pelican_color), NULL, GL_STATIC_DRAW);
    //First part of array holds vertices
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(pelican_vert), pelican_vert);
    //Second part of array hold colors (offset by sizeof(triangle))
    glBufferSubData(GL_ARRAY_BUFFER, sizeof(pelican_vert), sizeof(pelican_color), pelican_color);

    glEnableVertexAttribArray(GLvars.vpos_location);
    glEnableVertexAttribArray(GLvars.vcolor_location);

    //CHANGES HERE
    glVertexAttribPointer(GLvars.vpos_location, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));
    glVertexAttribPointer(GLvars.vcolor_location, 3, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(sizeof(pelican_vert)));
 

    glBindVertexArray(0);
}

//Draw a pelican
void Pelican::draw(mat4 proj) {

    glUseProgram(GLvars.program);
    glBindVertexArray(GLvars.vao);

    //If you have a modelview matrix, pass it with proj
    glUniformMatrix4fv(GLvars.M_location, 1, GL_TRUE, proj * state.ModelView);

    //Draw something
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 88);
    glDrawArrays(GL_POINTS, 136, 1);

    if(state.thruster_on){
      //Maybe draw something different if the thruster is on
        //should be vertices, vertice colors, and a call to gldrawarrays
        glDrawArrays(GL_TRIANGLE_STRIP, 88, 24); //left wing
        glDrawArrays(GL_TRIANGLE_STRIP, 111, 24); //right wing
        //first num specificies how many vertices to skip, second number how many vertices to draw
    }

    glBindVertexArray(0);
    glUseProgram(0);

}
