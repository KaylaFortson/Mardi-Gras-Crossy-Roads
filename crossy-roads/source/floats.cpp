//
//  floats.cpp
//  
//
//  Created by Marisa Madelyn Long on 11/2/21.
//

#include "common.h"
#include <time.h>
#include <stdlib.h>

Floats::Floats(){
    //vec2 floats_vert[20];
    //moving towards right
    /*
    floats_vert[0] = vec2(-4.0, -2.5);
    floats_vert[1] = vec2(-4.0, 2.5);
    floats_vert[2] = vec2(4.0, 2.5);
    floats_vert[3] = vec2(4.0, 2.5);
    floats_vert[4] = vec2(4.0, -2.5);
    floats_vert[5] = vec2(-4.0, -2.5);
    */ 


    //rec 1
    floats_vert[0] = vec2(-4.0, -2.5);
    floats_vert[1] = vec2(-4.0, 1.25);
    floats_vert[2] = vec2(-3.0, 1.25);
    floats_vert[3] = vec2(-3.0, -2.5);

    //rec 2
    floats_vert[4] = vec2(-3.0, -2.5);
    floats_vert[5] = vec2(-3.0, 1.0);
    floats_vert[6] = vec2(-2.0, 1.0);
    floats_vert[7] = vec2(-2.0, -2.5);

    //rec 3
    floats_vert[8] = vec2(-2.0, -2.0); //inner point
    floats_vert[9] = vec2(-2.0, 2.5); 
    floats_vert[10] = vec2(-1.0, 2.5);
    floats_vert[11] = vec2(-1.0, -2.0); //inner point 

    //rec 4
    floats_vert[12] = vec2(-1.0, -2.5);
    floats_vert[13] = vec2(-1.0, 1.0); //inner point 
    floats_vert[14] = vec2(1.0, 1.0); //inner point 
    floats_vert[15] = vec2(1.0, -2.5);

    //rec 5
    floats_vert[16] = vec2(-1.0, 2.0); //inner point 
    floats_vert[17] = vec2(-1.0, 2.5);
    floats_vert[18] = vec2(1.0, 2.5);
    floats_vert[19] = vec2(1.0, 2.0); //inner point 

    //rec 6
    floats_vert[20] = vec2(1.0, -2.0); //inner point 
    floats_vert[21] = vec2(1.0, 2.5);
    floats_vert[22] = vec2(2.0, 2.5);
    floats_vert[23] = vec2(2.0, -2.0); //inner point 

    //rec 7
    floats_vert[24] = vec2(2.0, -2.5);
    floats_vert[25] = vec2(2.0, 1.0);
    floats_vert[26] = vec2(3.0, 1.0);
    floats_vert[27] = vec2(3.0, -2.5);

    //rec 8
    floats_vert[28] = vec2(3.0, -2.5);
    floats_vert[29] = vec2(3.0, 1.25);
    floats_vert[30] = vec2(4.0, 1.25);
    floats_vert[31] = vec2(4.0, -2.5);

    //tires (left) 
    floats_vert[32] = vec2(-2.0, -2.5);
    floats_vert[33] = vec2(-2.0, -2.0); ///inner point 
    floats_vert[34] = vec2(-1.0, -2.0); //inner point 
    floats_vert[35] = vec2(-1.0, -2.5);

    //tires (right) 
    floats_vert[36] = vec2(2.0, -2.5);
    floats_vert[37] = vec2(2.0, -2.0); //inner point 
    floats_vert[38] = vec2(1.0, -2.0); //inner point 
    floats_vert[39] = vec2(1.0, -2.5);

    //beads decoration on float 
    floats_vert[40] = vec2(-2.0, 1.0);
    floats_vert[41] = vec2(-1.6, 0.7); //inner point
    floats_vert[42] = vec2(-1.2, 0.4); //inner point
    floats_vert[43] = vec2(-0.8, 0.1); //inner point
    floats_vert[44] = vec2(-0.4, 0.1); //inner point 
    floats_vert[45] = vec2(2.0, 1.0);
    floats_vert[46] = vec2(1.6, 0.7); //inner point
    floats_vert[47] = vec2(1.2, 0.4); //inner point
    floats_vert[48] = vec2(0.8, 0.1); //inner point
    floats_vert[49] = vec2(0.4, 0.1); //inner point 


    //for random color 
    //vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
   
    floats_colors[0] = vec3(0.3, 0.0, 0.5); //left side 1,2
    floats_colors[1] = vec3(0.3, 0.0, 0.5);
    floats_colors[2] = vec3(0.3, 0.0, 0.5);
    floats_colors[3] = vec3(0.3, 0.0, 0.5);
    floats_colors[4] = vec3(0.3, 0.0, 0.5);
    floats_colors[5] = vec3(0.3, 0.0, 0.5);
    floats_colors[6] = vec3(0.3, 0.0, 0.5);
    floats_colors[7] = vec3(0.3, 0.0, 0.5);
    floats_colors[8] = vec3(0.0, 0.7, 0.2); //middle 3,4,5,6
    floats_colors[9] = vec3(0.0, 0.7, 0.2);
    floats_colors[10] = vec3(0.0, 0.7, 0.2);
    floats_colors[11] = vec3(0.0, 0.7, 0.2);
    floats_colors[12] = vec3(0.0, 0.7, 0.2);
    floats_colors[13] = vec3(0.0, 0.7, 0.2);
    floats_colors[14] = vec3(0.0, 0.7, 0.2);
    floats_colors[15] = vec3(0.0, 0.7, 0.2);
    floats_colors[16] = vec3(0.0, 0.7, 0.2);
    floats_colors[17] = vec3(0.0, 0.7, 0.2);
    floats_colors[18] = vec3(0.0, 0.7, 0.2);
    floats_colors[19] = vec3(0.0, 0.7, 0.2);
    floats_colors[20] = vec3(0.0, 0.7, 0.2);
    floats_colors[21] = vec3(0.0, 0.7, 0.2);
    floats_colors[22] = vec3(0.0, 0.7, 0.2);
    floats_colors[23] = vec3(0.0, 0.7, 0.2);
    floats_colors[24] = vec3(0.9, 0.7, 0.0);  //right side 7,8
    floats_colors[25] = vec3(0.9, 0.7, 0.0);
    floats_colors[26] = vec3(0.9, 0.7, 0.0);
    floats_colors[27] = vec3(0.9, 0.7, 0.0);
    floats_colors[28] = vec3(0.9, 0.7, 0.0);
    floats_colors[29] = vec3(0.9, 0.7, 0.0);
    floats_colors[30] = vec3(0.9, 0.7, 0.0);
    floats_colors[31] = vec3(0.9, 0.7, 0.0);

    floats_colors[32] = vec3(0.1,0.0,0.2);  //tires 
    floats_colors[33] = vec3(0.1, 0.0, 0.2);
    floats_colors[34] = vec3(0.1, 0.0, 0.2);
    floats_colors[35] = vec3(0.1, 0.0, 0.2);
    floats_colors[36] = vec3(0.1, 0.0, 0.2);
    floats_colors[37] = vec3(0.1, 0.0, 0.2);
    floats_colors[38] = vec3(0.1, 0.0, 0.2);
    floats_colors[39] = vec3(0.1, 0.0, 0.2);
    
    floats_colors[40] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX); //beads 
    floats_colors[41] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[42] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[43] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[44] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[45] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[46] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[47] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[48] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    floats_colors[49] = vec3(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
    
    //outline
    floats_outside[0] = vec2(-4, -2.5);
    floats_outside[1] = vec2(-4, 1.25);
    floats_outside[2] = vec2(-2, 1.25);
    floats_outside[3] = vec2(-2, 2.25);
    floats_outside[4] = vec2(2, 2.25);
    floats_outside[5] = vec2(2, 1.25);
    floats_outside[6] = vec2(4, 1.25);
    floats_outside[7] = vec2(4, -2.5);
}
//Called everytime an animation tick happens
void Floats::update_state() {
    state.cur_location = state.velocity;
    state.ModelView = state.ModelView * Translate(state.cur_location.x, state.cur_location.y, 0);
   
    //wrap
    vec4 current = state.ModelView * vec4(0, 0, 0, 1);
    //keep asteroids in bounds
    //Worked with Prof. Summa in class on 10/12 to develop this.
    if (current.x >= 55) {
        state.ModelView = Translate(-110, 0, 0) * state.ModelView;
    }
    if (current.x <= -55) {
        state.ModelView = Translate(110, 0, 0) * state.ModelView;
    }

}

//Initialize the gl state and variables
void Floats::gl_init() {
    //Asteroid

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
    glBufferData(GL_ARRAY_BUFFER, sizeof(floats_vert) + sizeof(floats_colors), NULL, GL_STATIC_DRAW);
    //First part of array holds vertices
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(floats_vert), floats_vert);
    //Second part of array hold colors (offset by sizeof(triangle))
    glBufferSubData(GL_ARRAY_BUFFER, sizeof(floats_vert), sizeof(floats_colors), floats_colors);

    glEnableVertexAttribArray(GLvars.vpos_location);
    glEnableVertexAttribArray(GLvars.vcolor_location);

    //CHANGES HERE
    glVertexAttribPointer(GLvars.vpos_location, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));
    glVertexAttribPointer(GLvars.vcolor_location, 3, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(sizeof(floats_vert)));
 

    glBindVertexArray(0);
}

//Draw a float
void Floats::draw(mat4 proj) {

    glUseProgram(GLvars.program);
    glBindVertexArray(GLvars.vao);

    //If you have a modelview matrix, pass it with proj
    glUniformMatrix4fv(GLvars.M_location, 1, GL_TRUE, proj * state.ModelView);

    //Draw something
    glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 4, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 8, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 12, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 16, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 20, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 24, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 28, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 32, 4);
    glDrawArrays(GL_TRIANGLE_FAN, 36, 4);
    glPointSize(3.5);
    glDrawArrays(GL_POINTS, 40, 10);

   

    glBindVertexArray(0);
    glUseProgram(0);

}
