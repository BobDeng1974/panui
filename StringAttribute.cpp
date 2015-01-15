/* 
 * File:   StringAttribute.cpp
* Author: Joshua Johannson | Pancake
 *
 *
 * ---------------------------------------
 * STRINGATTRIBUTE CLASS
 * saves String style value
 * set, onchange
 * ---------------------------------------
 */


#include "StringAttribute.h"
using namespace std;


// ############################################
// -- CREATE OBJEKT --------------
StringAttribute::StringAttribute(OnChangeListener *listener, Type type, initializer_list<int> causeCalc) 
 : StyleAttribute(listener, type, causeCalc)
{
    // default
    stringValue = "";
}


// ## CHANGE VALUE ##########################
// -- SET
void StringAttribute::set(string value) 
{    
    stringValue = value;
    
    // call onchange callback
    onValueChange();
}



// -- GET

string StringAttribute::get()
{
    return stringValue;
}


// ###########################################
// -- DESTROY OBJEKT -----------
StringAttribute::~StringAttribute() {
}
