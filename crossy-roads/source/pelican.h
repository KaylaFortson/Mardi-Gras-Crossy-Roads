//
//  pelican.hpp
//  
//
//  Created by Marisa Madelyn Long on 11/2/21.
//

#ifndef pelican_h
#define pelican_h

#include <stdio.h>
#include "common.h"

#define _MAX_SPEED 10 //change later
#define _DAMPING 0.98
#define _ACC 3
#define _ROT 15


class Pelican {
    
    //Placeholders so everything compiles.  Customize for pelican, change later
    public:
        vec2 pelican_vert[137];
        vec2 pelican_outside[23];
        vec3 pelican_color[137];
        
    //Record of pelican's location
    struct {
        vec2 cur_location;      //current postion of the center
        vec2 accel = (vec2(0.0, -9.8));
        mat2 RotateZ2D( const GLfloat theta ){
          GLfloat angle = DegreesToRadians * theta;
          mat2 c;
          c[0][0] = c[1][1] = cos(angle);
          c[1][0] = sin(angle);
          c[0][1] = -c[1][0];
          return c;
        }
        vec2 velocity;       //Velocity
        bool thruster_on;    //Boolean if a thruster is on (jumping)
        bool facing_left = true; //for making it face the right direction
        mat4 ModelView;
      } state;
    
    //OpenGL variables for a pelican
    struct {
      GLuint vao;           //Vertex array object
      GLuint program;       //shader program
      GLuint buffer;        //Vertex buffer objects
      GLuint vertex_shader, fragment_shader;  //Shaders
      GLint vpos_location, vcolor_location;   //reference to pos and color in shaders
      GLint M_location;     //Reference to matrix in shader
    } GLvars;
    
public:
  

  Pelican();
  
  inline void start_thruster(){
      state.thruster_on = true;
      state.ModelView = state.ModelView * Translate(0, 7, 0);
  }
  inline void stop_thruster() {
      state.thruster_on= false;
      //jump_down();
  }
  inline void rotateLeft() {
      if (!state.facing_left){
          state.ModelView = state.ModelView *RotateY(180);
      }
      state.facing_left = true;
      state.ModelView = state.ModelView * Translate(-1, 0, 0);
      
  }
  inline void rotateRight(){
      if (state.facing_left){
          state.ModelView = state.ModelView *RotateY(180);
      }
      state.facing_left = false;
      state.ModelView = state.ModelView *Translate(-1, 0, 0);
    
  }
    
  void update_state();
  
  void gl_init();
  
  void draw(mat4 proj);
  
};


#endif /* pelican_hpp */
