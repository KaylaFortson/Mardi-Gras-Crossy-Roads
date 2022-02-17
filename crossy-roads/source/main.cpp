//
//  main.cpp
//  
//
//  Created by Marisa Madelyn Long on 11/2/21.
//

#include <stdio.h>
#include "common.h"

using namespace Angel;

Pelican pelican;
//lane 1
Floats floats1;
Floats floats2;
Floats floats3;
Floats floats4;
Floats floats5;
Floats floats6;
Floats floats7;
Floats floats8;
Floats floats9;
Floats floats10;
//lane 2
Floats floats11;
Floats floats12;
Floats floats13;
Floats floats14;
Floats floats15;
Floats floats16;
Floats floats17;
Floats floats18;
Floats floats19;
Floats floats20;
Floats floats21;
Floats floats22;
//lane 3
Floats floats23;
Floats floats24;
Floats floats25;
Floats floats26;
Floats floats27;
Floats floats28;
Floats floats29;
Floats floats30;
Floats floats31;
Floats floats32;
Floats floats33;
Floats floats34;
Floats floats35;
Floats floats36;
//lane 4
Floats floats37;
Floats floats38;
Floats floats39;
Floats floats40;
Floats floats41;
Floats floats42;
Floats floats43;
Floats floats44;
Floats floats45;
Floats floats46;
Floats floats47;
Floats floats48;
Floats floats49;
Floats floats50;
Floats floats51;
Floats floats52;
//extra unless we want to add to a lane
Floats floats53;
Floats floats54;
Floats floats55;
Floats floats56;
Floats floats57;
Floats floats58;
Floats floats59;
Floats floats60;
Lane lane; 
Lane lane2; 
Lane lane3; 
Lane lane4;
Grass grass1; 

//storing references so then edits will save outside of functions
std::vector<Floats*> floats_forward;
std::vector<Floats*> floats_backward;
std::vector<float> grass_values_x;
std::vector<float> grass_values_y;




bool inside;

static void error_callback(int error, const char* description)
{
  fprintf(stderr, "Error: %s\n", description);
}


static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  if (key == GLFW_KEY_LEFT && (action == GLFW_PRESS || action == GLFW_REPEAT))
    pelican.rotateLeft();
  if (key == GLFW_KEY_RIGHT && (action == GLFW_PRESS || action == GLFW_REPEAT))
    pelican.rotateRight();
  if (key == GLFW_KEY_SPACE){
    if(action == GLFW_PRESS){
      pelican.start_thruster();
    }
    if(action == GLFW_RELEASE){
      pelican.stop_thruster();
    }
  }
  
}


void init(){
  //changes the background color to green here 
  glClearColor(0.4, 0.7, 0.3, 0.0);
  glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
  glHint (GL_POINT_SMOOTH_HINT, GL_NICEST);
  pelican.gl_init();
  //passing in the reference. Have to do one by one unfortunately 
  //NOTE make sure to push back floats based on their direction!
  floats_forward.push_back(&floats1); //index 0
  floats_forward.push_back(&floats2); 
  floats_forward.push_back(&floats3); 
  floats_forward.push_back(&floats4); 
  floats_forward.push_back(&floats5); //index 4

  floats_backward.push_back(&floats6); //index 0
  floats_backward.push_back(&floats7);
  floats_backward.push_back(&floats8);
  floats_backward.push_back(&floats9);
  floats_backward.push_back(&floats10); //index 4
    
  floats_forward.push_back(&floats11); //index 5
  floats_forward.push_back(&floats12);
  floats_forward.push_back(&floats13);
  floats_forward.push_back(&floats14);
  floats_forward.push_back(&floats15);
  floats_forward.push_back(&floats16); //index 10

  floats_backward.push_back(&floats17); //index 5
  floats_backward.push_back(&floats18);
  floats_backward.push_back(&floats19);
  floats_backward.push_back(&floats20);
  floats_backward.push_back(&floats21);
  floats_backward.push_back(&floats22); //index 10

  floats_forward.push_back(&floats23); //index 11
  floats_forward.push_back(&floats24);
  floats_forward.push_back(&floats25);
  floats_forward.push_back(&floats26);
  floats_forward.push_back(&floats27);
  floats_forward.push_back(&floats28);
  floats_forward.push_back(&floats29); //index 17

  floats_backward.push_back(&floats30); //index 11
  floats_backward.push_back(&floats31);
  floats_backward.push_back(&floats32);
  floats_backward.push_back(&floats33);
  floats_backward.push_back(&floats34);
  floats_backward.push_back(&floats35);
  floats_backward.push_back(&floats36); //index 17
    
  floats_forward.push_back(&floats37); //index 18
  floats_forward.push_back(&floats38);
  floats_forward.push_back(&floats39);
  floats_forward.push_back(&floats40);
  floats_forward.push_back(&floats41);
  floats_forward.push_back(&floats42);
  floats_forward.push_back(&floats43);
  floats_forward.push_back(&floats44); //index 25

  floats_backward.push_back(&floats45); //index 18
  floats_backward.push_back(&floats46);
  floats_backward.push_back(&floats47);
  floats_backward.push_back(&floats48);
  floats_backward.push_back(&floats49);
  floats_backward.push_back(&floats50);
  floats_backward.push_back(&floats51);
  floats_backward.push_back(&floats52); //index 25

  //need to deference here to pull floats out of the vector
  //inits all floats
  for (int i = 0; i < floats_forward.size(); i++) {
      floats_forward[i]->gl_init(); 
  }
  for (int i = 0; i < floats_backward.size(); i++) {
      floats_backward[i]->gl_init();
  }
  

  lane.gl_init(); 
  lane2.gl_init(); 
  lane3.gl_init(); 
  lane4.gl_init();

  grass1.gl_init(); 
}

void inside_outside_test(Pelican pelican, Floats* floats) {
    //inside = false;

    //need to calculate x and y min and max of each
    vec4 current_float = floats->state.ModelView * vec4(0, 0, 0, 1);
    vec4 current_pelican = pelican.state.ModelView * vec4(2.5, -47, 0, 1);
    double float_max_x = (current_float.x + 4.0);
    double float_min_x = (current_float.x - 4.0);
    double pelican_max_x = (current_pelican.x + 1.875);
    double pelican_min_x = (current_pelican.x - 1.875);
    double float_max_y = (current_float.y + 2.5);
    double float_min_y = (current_float.y - 2.5);
    double pelican_max_y = (current_pelican.y + 3.75);
    double pelican_min_y = (current_pelican.y - 3.75);
    //LOGIC:
    //pelican is inside a float
    //if statement to see if pelican x max or min falls between the float
      //if that is true, check if the pelican min or max y is inside the float min/max
    bool x_overlap = false;
    bool y_overlap = false;
    if ((pelican_max_x <= float_max_x) && (pelican_max_x >= float_min_x)) {
        x_overlap = true;
    }
    if ((pelican_min_x <= float_max_x) && (pelican_min_x >= float_min_x)) {
        x_overlap = true;
    }
    if ((pelican_max_y <= float_max_y) && (pelican_max_y >= float_min_y)) {
        y_overlap = true;
    }
    if ((pelican_min_y <= float_max_y) && (pelican_min_y >= float_min_y)) {
        y_overlap = true;
    }
    if (x_overlap && y_overlap) {
        inside = true;

    }
}
//Call update function 30 times a second
void animate() {
    inside = false;
    if (glfwGetTime() > 0.033) {
        glfwSetTime(0.0);
        pelican.update_state();

        //updates the state for all floats moving forward  
        for (int i = 0; i < floats_forward.size(); i++) {
            //floats[i]->gl_init();
            floats_forward[i]->state.velocity = vec2(.5, 0);
            floats_forward[i]->update_state();
        }
        //updates the state for all floats moving backwards
        for (int i = 0; i < floats_backward.size(); i++) {
            //floats[i]->gl_init();
            floats_backward[i]->state.velocity = vec2(-.5, 0);
            floats_backward[i]->update_state();
        }

        //inside_outside_test(pelican, floats_forward[0]);
          //FIX Me: uncomment once we are sure that the singular test above works
        for (int i = 0; i < floats_forward.size(); i++) {
            inside_outside_test(pelican, floats_forward[i]);
        }
        for (int i = 0; i < floats_backward.size(); i++) {
            inside_outside_test(pelican, floats_backward[i]);
        }
        if (inside == true) {
            pelican.state.ModelView = Translate(0, -10, 0) * pelican.state.ModelView;
        }
    }
}




int main(void)
{
  GLFWwindow* window;
  
  glfwSetErrorCallback(error_callback);
  
  if (!glfwInit())
    exit(EXIT_FAILURE);
  
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  
  glfwWindowHint(GLFW_SAMPLES, 10);
  
  
  window = glfwCreateWindow(1024, 768, "Crossy Roads", NULL, NULL);
  if (!window){
    glfwTerminate();
    exit(EXIT_FAILURE);
  }
  
  glfwSetKeyCallback(window, key_callback);
  
  glfwMakeContextCurrent(window);
  gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
  glfwSwapInterval(1);
  
  init();


  //forwards floats translation
  //lane 1
  for (int i = 1; i < 3; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 0; i < 5; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i]->state.ModelView * Translate(0, -38.5, 0);
  }
  //lane 2
  for (int i = 6; i < 9; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 5; i < 11; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i]->state.ModelView * Translate(0, -13.5, 0);
  }
  //lane 3
  for (int i = 12; i < 15; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 11; i < 18; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i]->state.ModelView * Translate(0, 11.5, 0);
  }
  //lane 4
  for (int i = 19; i < 23; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 18; i < 26; i++) {
      floats_forward[i]->state.ModelView = floats_forward[i]->state.ModelView * Translate(0, 31.5, 0);
  }
  //Backwards floats translation
    //lane 1
  for (int i = 1; i < 3; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 0; i < 5; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i]->state.ModelView * Translate(0, -32.5, 0);
  }
  //lane 2
  for (int i = 6; i < 9; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 5; i < 11; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i]->state.ModelView * Translate(0, -7.5, 0);
  }
  //lane 3
  for (int i = 12; i < 15; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 11; i < 18; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i]->state.ModelView * Translate(0, 17.5, 0);
  }
  //lane 4
  for (int i = 19; i < 22; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i - 1]->state.ModelView * Translate(-46, 0, 0);
  }
  for (int i = 18; i < 26; i++) {
      floats_backward[i]->state.ModelView = floats_backward[i]->state.ModelView * Translate(0, 37.5, 0);
  }

  pelican.state.ModelView = Translate(2.5, -47.0, 0.0) * Scale(0.75, 0.75, 1.0) * Translate(-2.5, 47.0, 0.0) * pelican.state.ModelView;
    
    //initialize grass values between -50 and 50
    for (int i = 0; i < 250; i++) {
        grass_values_x.push_back(rand() % 101 + (-50)); 
        grass_values_y.push_back(rand() % 101 + (-50));
    }

  while (!glfwWindowShouldClose(window)){
    
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0, 0, width, height);
    
    //Pick a coordinate system that makes the most sense to you
    //(left, right, bottom, top) previously had a typo
    mat4 proj = Ortho2D(-50.0, 50.0, -50.0, 50.0);
    
    animate();
    
    glClear(GL_COLOR_BUFFER_BIT);
   

 
   for (int i = 0; i < 250; i++) {
        grass1.draw(proj * Translate(grass_values_x[i], grass_values_y[i], 0));
    }


    lane.draw(proj); 
    lane2.draw(proj * Translate(lane.state.cur_location.x, 25, 0));
    lane3.draw(proj * Translate(lane.state.cur_location.x, 50, 0));
    lane4.draw(proj * Translate(lane.state.cur_location.x, 70, 0));
    pelican.draw(proj);
    //lane moving left to right
      
  for (int i = 0; i < floats_forward.size(); i++) {
      floats_forward[i]->draw(proj);
  }
  for (int i = 0; i < floats_backward.size(); i++) {
      floats_backward[i]->draw(proj);
  }
      
    if(inside == true){
        std::cout << "COLLIDE!";
       // glfwDestroyWindow(window);
    }
    
    glfwSwapBuffers(window);
    glfwPollEvents();
    
  }
  
  glfwDestroyWindow(window);
  
  glfwTerminate();
  exit(EXIT_SUCCESS);
}
