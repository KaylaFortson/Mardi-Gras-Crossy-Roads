// #pragma once
//
//  floats.hpp
//  
//
//  Created by Marisa Madelyn Long on 11/2/21.
//

#ifndef floats_h
#define floats_h

#include <stdio.h>
#include "common.h"

//change these later based on how fast we want the floats to go?
#define _MAX_SPEED 10
#define _DAMPING 0.98
#define _ACC 3
#define _ROT 15

class Floats{
    //Placeholders so everything compiles.
    public:
    vec2 floats_vert[50];
    vec2 floats_outside[8];
    vec3 floats_colors[50];
    //make sure to keep track of the outline so that we can check for collisions

    //Record of the Float's state
    struct{
        vec2 cur_location;   //Current position of the center
        float angle;         //Rotation angle
        vec2 pointing;       //Vector pointing to the front of the float
        //we might not need this since the floats will always move in the same direction
        mat2 RotateZ2D(const GLfloat theta) {
            GLfloat angle = DegreesToRadians * theta;
            mat2 c;
            c[0][0] = c[1][1] = cos(angle);
            c[1][0] = sin(angle);
            c[0][1] = -c[1][0];
            return c;
        }
        vec2 velocity = vec2(2, 0);  //FIXME: inherit from lane
        mat4 ModelView;
        bool velocity_set = false;
    } state;
    
    //OpenGL variables for a float
    struct {
        GLuint vao;           //Vertex array object
        GLuint program;       //shader program
        GLuint buffer;        //Vertex buffer objects
        GLuint vertex_shader, fragment_shader;  //Shaders
        GLint vpos_location, vcolor_location;   //reference to pos and color in shaders
        GLint M_location;     //Reference to matrix in shader
    } GLvars;
    
    public:

        Floats();
        //i don't think we need the rotations
        inline void rotateLeft() {
            state.angle += 10;
            state.ModelView = RotateZ(state.angle);
        }
        inline void rotateRight() {
            state.angle -= 10;
            state.ModelView = RotateZ(state.angle);

        }

        void update_state();

        void gl_init();

        void draw(mat4 proj);

};
    

#endif /* floats_hpp */
