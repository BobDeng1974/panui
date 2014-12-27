/* 
 * File:   const.h
 * Author: Joshua Johannson | Pancake
 *
 * 
 *  ---------------------------------------
 * CONSTANT
 * contains constants
 *  ---------------------------------------
 */


#ifndef CONST_H
#define	CONST_H

// -- CONST
// -- calculation Task types --------------------------
const int UI_CALCTASK_NONE                      = 0,
          UI_CALCTASK_LAYOUT_SIZE               = 1,
          UI_CALCTASK_LAYOUT_CHIDREN_POSITION   = 2,
          UI_CALCTASK_TEXT_FAMILY               = 3,
          UI_CALCTASK_TEXT_SIZE                 = 4,
          UI_CALCTASK_TEXT_ATLAS                = 5,
          UI_CALCTASK_TEXT_TEXT                 = 6,
          UI_CALCTASK__SIZE                     = 6;

// -- view ---------------------------------------------
const int UI_VIEW_SELF                          = 0,
          UI_VIEW_PARRENT                       = 1;


#endif	/* CONST_H */
