/* 
 * File:   GL.h
 * Author: Joshua Johannson | Pancake
 *
 * ---------------------------------------
 * GL CLASS
 * basic OpenGl functionality
 * static class
 * ---------------------------------------
 */


#ifndef GL_H
#define	GL_H 

#ifdef pl_pi
#include <GLES2/gl2.h>
#else
#include <GL/glew.h>
#include <GL/glu.h>
#include <SDL/SDL.h>
#endif

#include <stdlib.h>
#include <string>
#include <iostream>
#include <glm/glm.hpp>

#include <ft2build.h>
#include FT_FREETYPE_H
using namespace std;

class GL
{
    public:
      GL ();
      
      // var ------------------------------------------
      // handels
      // -- SHADER_VIEW_BACKGROUND
      static GLint SHADER_VIEW_BACKGROUND,
                   SHADER_VIEW_BACKGROUND_ATTR_VERTEX_POS,
                   SHADER_VIEW_BACKGROUND_UNIF_TRANSFORM_MATIX,
                   SHADER_VIEW_BACKGROUND_UNIF_COLOR;
      
      // -- SHADER_TEXT_CHARACTER
      static GLint SHADER_TEXT_CHARACTER,
                   SHADER_TEXT_CHARACTER_ATTR_VERTEX_POS,
                   SHADER_TEXT_CHARACTER_UNIF_TRANSFORM_MATIX,
                   SHADER_TEXT_CHARACTER_UNIF_COLOR,
                   SHADER_TEXT_CHARACTER_UNIF_TEXTURE;
      
      // Transfom Matix
      static glm::mat4 transfomMatix,
                       projectionMatix;
      
      // Freetype
      static FT_Library ftLib;
      
      
      // function ------------------------------------
      
      /* initialisation of pre View creation stuff \n
       * create Freetype lib   */ 
      static void initPre(); 
      
      /* initialisation of gl \n
       * creates shaders      */ 
      static void init(); 
      
      /* create shaderProgram 
       * by vertex + Fragemnt shader */
      static void createShader(const GLchar *vertexShader, const GLchar *fragmentShader, GLint *shaderProgramHandle, GLint *shaderAttributeVertexPosHandle, GLint *shaderUniformColorHandle, GLint *shaderUniformTransformMatixHandle);

      
    private:
      // check if shader causes error
      static void checkShaderError(GLuint shader, bool isProgram, GLint flag, string message) ;

};

/*
// static
GLint GL::SHADER_VIEW_BACKGROUND,
      GL::SHADER_VIEW_BACKGROUND_ATTR_VERTEX_POS,
      GL::SHADER_VIEW_BACKGROUND_UNIF_PROJECTION_MATIX,
      GL::SHADRE_VIEW_BACKGROUND_UNIF_TRANSFORM_MATIX,
      GL::SHADER_VIEW_BACKGROUND_UNIF_COLOR;

glm::mat4 GL::transfomMatix;
*/

#endif	/* GL_H */

