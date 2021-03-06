/* 
 * File:   StringAttribute.h
* Author: Joshua Johannson | Pancake
 *
 *
 * ---------------------------------------
 * STRINGATTRIBUTE CLASS
 * saves String style value
 * set, onchange
 * ---------------------------------------
 */


#ifndef STRINGATTRIBUTE_H
#define	STRINGATTRIBUTE_H

// include
#include <sstream>
#include "StyleAttribute.h"
#include <string>
#include <stdlib.h>

using namespace std;
namespace ui
{

/* StringAttribute Class
 */
class StringAttribute : public StyleAttribute
{
    public:
      StringAttribute(OnChangeListener *listener, Type type);
      ~StringAttribute();
      
      // set value
      void set(string value);
      StyleRule& operator()(string value);
      
      // get value
      string get();


    protected:
      // ! READ ONLY !
      string stringValue;
};


};     /* END NAMESPACE */
#endif	/* STRINGVALUE_H */

