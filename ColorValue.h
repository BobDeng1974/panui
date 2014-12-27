/* 
 * File:   ColorValue.h
 * Author: Joshua Johannson | Pancake
 *
 *
 * ---------------------------------------
 * COLORVALUE CLASS
 * saves color style value
 * set, get, onchange
 * ---------------------------------------
 */


#ifndef COLORVALUE_H
#define	COLORVALUE_H

#include "Value.h"
#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class ColorValue : Value
{
    public:
      ColorValue ();
      ~ColorValue ();
      
      
      void set(string value);   // set by hex: R G B Alpha
      void setR(float red);     // set red
      void setG(float green);   // set green
      void setB(float blue);    // set blue
      void setAlpha(float red); // set alpha
      
      // get value
      string get();             // get as hex: R G B Alpha
      
      
      float r;          // ! READ ONLY !
      float g;          // ! READ ONLY !
      float b;          // ! READ ONLY !
      float alpha;      // ! READ ONLY !
      
      
    private:
      // string    stringValue;
};

#endif	/* COLORVALUE_H */

