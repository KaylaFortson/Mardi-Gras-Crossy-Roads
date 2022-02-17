//
//  lane.cpp
//
//
//  Created by Kayla Fortson on 11/9/21.
//

#include "common.h"
#include <time.h>
#include <stdlib.h>

Lane::Lane() {
    //vert here
    //street base
    lane_vert[0] = vec2(-50, -41); 
    lane_vert[1] = vec2(50, -41); 
    lane_vert[2] = vec2(50, -30); 
    lane_vert[3] = vec2(-50, -30); 

    //start white blocks left side
    lane_vert[4] = vec2(-46, -36); 
    lane_vert[5] = vec2(-44, -36);
    lane_vert[6] = vec2(-44, -35);
    lane_vert[7] = vec2(-46, -35);
    
    lane_vert[8] = vec2(-40, -36);
    lane_vert[9] = vec2(-38, -36);
    lane_vert[10] = vec2(-38, -35);
    lane_vert[11] = vec2(-40, -35);

    lane_vert[12] = vec2(-34, -36);
    lane_vert[13] = vec2(-32, -36);
    lane_vert[14] = vec2(-32, -35);
    lane_vert[15] = vec2(-34, -35);

    lane_vert[16] = vec2(-28, -36);
    lane_vert[17] = vec2(-26, -36);
    lane_vert[18] = vec2(-26, -35);
    lane_vert[19] = vec2(-28, -35);

    lane_vert[20] = vec2(-22, -36);
    lane_vert[21] = vec2(-20, -36);
    lane_vert[22] = vec2(-20, -35);
    lane_vert[23] = vec2(-22, -35);

    lane_vert[24] = vec2(-16, -36);
    lane_vert[25] = vec2(-14, -36);
    lane_vert[26] = vec2(-14, -35);
    lane_vert[27] = vec2(-16, -35);

    lane_vert[28] = vec2(-10, -36);
    lane_vert[29] = vec2(-8, -36);
    lane_vert[30] = vec2(-8, -35);
    lane_vert[31] = vec2(-10, -35);

    lane_vert[32] = vec2(-4, -36);
    lane_vert[33] = vec2(-2, -36);
    lane_vert[34] = vec2(-2, -35);
    lane_vert[35] = vec2(-4, -35);

    //start white blocks right side 
    lane_vert[36] = vec2(46, -36);
    lane_vert[37] = vec2(44, -36);
    lane_vert[38] = vec2(44, -35);
    lane_vert[39] = vec2(46, -35);

    lane_vert[40] = vec2(40, -36);
    lane_vert[41] = vec2(38, -36);
    lane_vert[42] = vec2(38, -35);
    lane_vert[43] = vec2(40, -35);

    lane_vert[44] = vec2(34, -36);
    lane_vert[45] = vec2(32, -36);
    lane_vert[46] = vec2(32, -35);
    lane_vert[47] = vec2(34, -35);

    lane_vert[48] = vec2(28, -36);
    lane_vert[49] = vec2(26, -36);
    lane_vert[50] = vec2(26, -35);
    lane_vert[51] = vec2(28, -35);

    lane_vert[52] = vec2(22, -36);
    lane_vert[53] = vec2(20, -36);
    lane_vert[54] = vec2(20, -35);
    lane_vert[55] = vec2(22, -35);

    lane_vert[56] = vec2(16, -36);
    lane_vert[57] = vec2(14, -36);
    lane_vert[58] = vec2(14, -35);
    lane_vert[59] = vec2(16, -35);

    lane_vert[60] = vec2(10, -36);
    lane_vert[61] = vec2(8, -36);
    lane_vert[62] = vec2(8, -35);
    lane_vert[63] = vec2(10, -35);

    lane_vert[64] = vec2(4, -36);
    lane_vert[65] = vec2(2, -36);
    lane_vert[66] = vec2(2, -35);
    lane_vert[67] = vec2(4, -35);

    //colors here
    //street base 
    lane_colors[0] = vec3(0.72, 0.69, 0.67); 
    lane_colors[1] = vec3(0.72, 0.69, 0.67);
    lane_colors[2] = vec3(0.72, 0.69, 0.67);
    lane_colors[3] = vec3(0.72, 0.69, 0.67);
    
    //white blocks 
    lane_colors[4] = vec3(1.0, 1.0, 1.0); 
    lane_colors[5] = vec3(1.0, 1.0, 1.0);
    lane_colors[6] = vec3(1.0, 1.0, 1.0);
    lane_colors[7] = vec3(1.0, 1.0, 1.0);

    lane_colors[8] = vec3(1.0, 1.0, 1.0);
    lane_colors[9] = vec3(1.0, 1.0, 1.0);
    lane_colors[10] = vec3(1.0, 1.0, 1.0);
    lane_colors[11] = vec3(1.0, 1.0, 1.0);

    lane_colors[12] = vec3(1.0, 1.0, 1.0);
    lane_colors[13] = vec3(1.0, 1.0, 1.0);
    lane_colors[14] = vec3(1.0, 1.0, 1.0);
    lane_colors[15] = vec3(1.0, 1.0, 1.0);

    lane_colors[16] = vec3(1.0, 1.0, 1.0);
    lane_colors[17] = vec3(1.0, 1.0, 1.0);
    lane_colors[18] = vec3(1.0, 1.0, 1.0);
    lane_colors[19] = vec3(1.0, 1.0, 1.0);

    lane_colors[20] = vec3(1.0, 1.0, 1.0);
    lane_colors[21] = vec3(1.0, 1.0, 1.0);
    lane_colors[22] = vec3(1.0, 1.0, 1.0);
    lane_colors[23] = vec3(1.0, 1.0, 1.0);

    lane_colors[24] = vec3(1.0, 1.0, 1.0);
    lane_colors[25] = vec3(1.0, 1.0, 1.0);
    lane_colors[26] = vec3(1.0, 1.0, 1.0);
    lane_colors[27] = vec3(1.0, 1.0, 1.0);

    lane_colors[28] = vec3(1.0, 1.0, 1.0);
    lane_colors[29] = vec3(1.0, 1.0, 1.0);
    lane_colors[30] = vec3(1.0, 1.0, 1.0);
    lane_colors[31] = vec3(1.0, 1.0, 1.0);

    lane_colors[32] = vec3(1.0, 1.0, 1.0);
    lane_colors[33] = vec3(1.0, 1.0, 1.0);
    lane_colors[34] = vec3(1.0, 1.0, 1.0);
    lane_colors[35] = vec3(1.0, 1.0, 1.0);

    lane_colors[36] = vec3(1.0, 1.0, 1.0);
    lane_colors[37] = vec3(1.0, 1.0, 1.0);
    lane_colors[38] = vec3(1.0, 1.0, 1.0);
    lane_colors[39] = vec3(1.0, 1.0, 1.0);

    lane_colors[40] = vec3(1.0, 1.0, 1.0);
    lane_colors[41] = vec3(1.0, 1.0, 1.0);
    lane_colors[42] = vec3(1.0, 1.0, 1.0);
    lane_colors[43] = vec3(1.0, 1.0, 1.0);

    lane_colors[44] = vec3(1.0, 1.0, 1.0);
    lane_colors[45] = vec3(1.0, 1.0, 1.0);
    lane_colors[46] = vec3(1.0, 1.0, 1.0);
    lane_colors[47] = vec3(1.0, 1.0, 1.0);

    lane_colors[48] = vec3(1.0, 1.0, 1.0);
    lane_colors[49] = vec3(1.0, 1.0, 1.0);
    lane_colors[50] = vec3(1.0, 1.0, 1.0);
    lane_colors[51] = vec3(1.0, 1.0, 1.0);

    lane_colors[52] = vec3(1.0, 1.0, 1.0);
    lane_colors[53] = vec3(1.0, 1.0, 1.0);
    lane_colors[54] = vec3(1.0, 1.0, 1.0);
    lane_colors[55] = vec3(1.0, 1.0, 1.0);

    lane_colors[56] = vec3(1.0, 1.0, 1.0);
    lane_colors[57] = vec3(1.0, 1.0, 1.0);
    lane_colors[58] = vec3(1.0, 1.0, 1.0);
    lane_colors[59] = vec3(1.0, 1.0, 1.0);

    lane_colors[60] = vec3(1.0, 1.0, 1.0);
    lane_colors[61] = vec3(1.0, 1.0, 1.0);
    lane_colors[62] = vec3(1.0, 1.0, 1.0);
    lane_colors[63] = vec3(1.0, 1.0, 1.0);

    lane_colors[64] = vec3(1.0, 1.0, 1.0);
    lane_colors[65] = vec3(1.0, 1.0, 1.0);
    lane_colors[66] = vec3(1.0, 1.0, 1.0);
    lane_colors[67] = vec3(1.0, 1.0, 1.0);
    
    

}
//Called everytime an animation tick happens
void Lane::update_state() {



}

//Initialize the gl state and variables
void Lane::gl_init() {
    //Lane

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
    glBufferData(GL_ARRAY_BUFFER, sizeof(lane_vert) + sizeof(lane_colors), NULL, GL_STATIC_DRAW);
    //First part of array holds vertices
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(lane_vert), lane_vert);
    //Second part of array hold colors (offset by sizeof(triangle))
    glBufferSubData(GL_ARRAY_BUFFER, sizeof(lane_vert), sizeof(lane_colors), lane_colors);

    glEnableVertexAttribArray(GLvars.vpos_location);
    glEnableVertexAttribArray(GLvars.vcolor_location);

    //CHANGES HERE
    glVertexAttribPointer(GLvars.vpos_location, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));
    glVertexAttribPointer(GLvars.vcolor_location, 3, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(sizeof(lane_vert)));


    glBindVertexArray(0);
}

//Draw a float
void Lane::draw(mat4 proj) {

    glUseProgram(GLvars.program);
    glBindVertexArray(GLvars.vao);

    //If you have a modelview matrix, pass it with proj
    glUniformMatrix4fv(GLvars.M_location, 1, GL_TRUE, proj * state.ModelView);

    //Draw something
    //base street
   glDrawArrays(GL_TRIANGLE_FAN, 0, 4);

   //white blocks
   glDrawArrays(GL_TRIANGLE_FAN, 4, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 8, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 12, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 16, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 20, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 24, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 28, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 32, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 36, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 40, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 44, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 48, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 52, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 56, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 60, 4);
   glDrawArrays(GL_TRIANGLE_FAN, 64, 4);
 



    glBindVertexArray(0);
    glUseProgram(0);

}
