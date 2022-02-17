// #pragma once
//
//  lane.h
//
//
//  Created by Kayla Fortson on 11/9/21.
//

#ifndef lane_h
#define lane_h

#include <stdio.h>
#include "common.h"

//change these later based on how fast we want the floats to go?
#define _MAX_SPEED 10
#define _DAMPING 0.98
#define _ACC 3
#define _ROT 15

class Lane {
    //Placeholders so everything compiles.
public:
    vec2 lane_vert[68];
    vec3 lane_colors[68];

    //make sure to keep track of the outline so that we can check for collisions

    //Record of the Lane's state
    struct {
        vec2 cur_location;   //Current position of the center
        float angle;         //Rotation angle
        vec2 pointing;       //Vector pointing to the front of the lane
        std::vector < Floats > floats;  //array of floats for this lane
        mat2 RotateZ2D(const GLfloat theta) {
            GLfloat angle = DegreesToRadians * theta;
            mat2 c;
            c[0][0] = c[1][1] = cos(angle);
            c[1][0] = sin(angle);
            c[0][1] = -c[1][0];
            return c;
        }
        vec2 velocity;       //Velocity of this street
        vec2 acceleration;
        mat4 ModelView;
        bool velocity_set = false;
    } state;

    //OpenGL variables for a lane
    struct {
        GLuint vao;           //Vertex array object
        GLuint program;       //shader program
        GLuint buffer;        //Vertex buffer objects
        GLuint vertex_shader, fragment_shader;  //Shaders
        GLint vpos_location, vcolor_location;   //reference to pos and color in shaders
        GLint M_location;     //Reference to matrix in shader
    } GLvars;

public:

    Lane();
    //implement
    inline void shiftUp() {
        //state.angle += 10;
        //state.ModelView = RotateZ(state.angle);
    }

    void update_state();

    void gl_init();

    void draw(mat4 proj);
    
};


#endif /* lane_h */
