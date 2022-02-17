//
//  grass.cpp
//
//
//  Created by Kayla Fortson on 12/11/21.
//

#include "common.h"
#include <time.h>
#include <stdlib.h>

Grass::Grass(){
	grass_vert[0] = vec2(0, 0); 
    grass_vert[1] = vec2(0, 1.0);
    grass_vert[2] = vec2(0.3, 1.0);
    grass_vert[3] = vec2(0.3, 0);

    grass_vert[4] = vec2(0.5, 0);
    grass_vert[5] = vec2(0.5, 1.5);
    grass_vert[6] = vec2(0.8, 1.5);
    grass_vert[7] = vec2(0.8, 0);

    grass_vert[8] = vec2(1.0, 0);
    grass_vert[9] = vec2(1.0, 1.0);
    grass_vert[10] = vec2(1.3, 1.0);
    grass_vert[11] = vec2(1.3, 0);

    grass_colors[0] = vec3(0.2, 0.8, 0.2); 
    grass_colors[1] = vec3(0.2, 0.8, 0.2);
    grass_colors[2] = vec3(0.2, 0.8, 0.2);
    grass_colors[3] = vec3(0.2, 0.8, 0.2);

    grass_colors[4] = vec3(0.2, 0.8, 0.2);
    grass_colors[5] = vec3(0.2, 0.8, 0.2);
    grass_colors[6] = vec3(0.2, 0.8, 0.2);
    grass_colors[7] = vec3(0.2, 0.8, 0.2);

    grass_colors[8] = vec3(0.2, 0.8, 0.2);
    grass_colors[9] = vec3(0.2, 0.8, 0.2);
    grass_colors[10] = vec3(0.2, 0.8, 0.2);
    grass_colors[11] = vec3(0.2, 0.8, 0.2);
}

//Called everytime an animation tick happens
void Grass::update_state() {



}
//Initialize the gl state and variables
void Grass::gl_init() {
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
    glBufferData(GL_ARRAY_BUFFER, sizeof(grass_vert) + sizeof(grass_colors), NULL, GL_STATIC_DRAW);
    //First part of array holds vertices
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(grass_vert), grass_vert);
    //Second part of array hold colors (offset by sizeof(triangle))
    glBufferSubData(GL_ARRAY_BUFFER, sizeof(grass_vert), sizeof(grass_colors), grass_colors);

    glEnableVertexAttribArray(GLvars.vpos_location);
    glEnableVertexAttribArray(GLvars.vcolor_location);

    //CHANGES HERE
    glVertexAttribPointer(GLvars.vpos_location, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));
    glVertexAttribPointer(GLvars.vcolor_location, 3, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(sizeof(grass_vert)));


    glBindVertexArray(0);
}

//Draw a float
void Grass::draw(mat4 proj) {

    glUseProgram(GLvars.program);
    glBindVertexArray(GLvars.vao);

    //If you have a modelview matrix, pass it with proj
    glUniformMatrix4fv(GLvars.M_location, 1, GL_TRUE, proj * state.ModelView);

    //Draw something
    //base
    glDrawArrays(GL_TRIANGLE_FAN, 0, 4);

    glDrawArrays(GL_TRIANGLE_FAN, 4, 4);

    glDrawArrays(GL_TRIANGLE_FAN, 8, 4);


    glBindVertexArray(0);
    glUseProgram(0);

}
