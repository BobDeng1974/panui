/* 
 * File:   Style.h
 * Author: Joshua Johannson | Pancake
 *
 *
 * ---------------------------------------
 * STYLE CLASS
 * owns all STYLERULES
 * 
 * ---------------------------------------
 */


#ifndef STYLE_H
#define	STYLE_H

// include
#include "StyleRule.h"
#include <list>
#include <stdlib.h>

using namespace std;
namespace ui
{

/* Style Class
 */
class Style : protected Log
{
    public:
      /* init 
       * @description creates default styleRules*/
      static void init();
        
      StyleRule* operator()(string selector);
      StyleRule* operator()(StyleRule *rule);
        
      static void addRule(StyleRule* rule);             // add Rule to list
      static void removeRule(StyleRule* rule);          // remove Rule from list
      static StyleRule* getRule(string selector);       // search for a view in list
      
      // rules list
      static /*const*/ list<StyleRule*> rules; 
      static /*const*/ list<StyleRule*>::iterator rulesIter;
      
    private:
      

};


};     /* END NAMESPACE */
#endif	/* STYLE_H */

