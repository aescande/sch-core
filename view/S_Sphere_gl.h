#ifndef _S_SPHERE_GL_H
#define _S_SPHERE_GL_H

#include "S_Object_gl.h"
#include <SCD/S_Object/S_Sphere.h>

namespace SCD
{
  class S_Sphere_GL : public S_Object_GL
  {
  public:
    S_Sphere_GL(S_Sphere * obj);

     /*!
    * \brief displays the object in its cordinates using OpenGl. Default is support-mapping based display method.
    */
    SCD_API virtual void drawGLInLocalCordinates();

  private:
    void createDispList();

    S_Sphere * sphere_;
    int displist_;
  };
}

#endif // _S_SPHERE_GL_H