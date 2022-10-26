/*!
 * trigger.cpp - Easy library for Nextion Displays
 * Copyright (c) 2020 Athanasios Seitanis < seithagta@gmail.com >. 
 * All rights reserved under the library's licence
 */

/*! We separate this file from the EasyNextionLibrary.cpp in order to make easier the modifications for it
 * and for simplifying reasons instead of dealing with a large code file.
 
 * if you want to change the name of the predefined voids that I made,(trigger1, trigger2....etc)
 * you must change:
   1. The name from "declare the functions"  
       ---------(example: extern void trigger1(); -> extern void myFunction();)

   2. The name from "declaration of the function as weak"  
    (example: extern void trigger1() __attribute__((weak)); ---> extern void myFunction() __attribute__((weak));)

   3. the predefined name in the switch(){case} for the trigger command group at the callTriggers.cpp file
   
 * With the same way, you can add as many extern void as you like
 * NOTE: WE can have UP TO 255 extern void
 *
 * When a function has a weak attribute it will be created only when user
 * declare this function on the main code
 */


#ifndef trigger_h
#define trigger_h

// weak attribute funcion for read the custom command protocol

extern void easyNexReadCustomCommand() __attribute__((weak)) {}

extern void toSleep() __attribute__((weak)) {}
extern void wakeUp() __attribute__((weak)) {}

// declaration of the trigger functions as weak
extern void trigger0() __attribute__((weak)) {}
extern void trigger1() __attribute__((weak)) {}
extern void trigger2() __attribute__((weak)) {}
extern void trigger3() __attribute__((weak)) {}
extern void trigger4() __attribute__((weak)) {}
extern void trigger5() __attribute__((weak)) {}
extern void trigger6() __attribute__((weak)) {}
extern void trigger7() __attribute__((weak)) {}
extern void trigger8() __attribute__((weak)) {}
extern void trigger9() __attribute__((weak)) {}
extern void trigger10() __attribute__((weak)) {}
extern void trigger11() __attribute__((weak)) {}
extern void trigger12() __attribute__((weak)) {}
extern void trigger13() __attribute__((weak)) {}
extern void trigger14() __attribute__((weak)) {}
extern void trigger15() __attribute__((weak)) {}
extern void trigger16() __attribute__((weak)) {}
extern void trigger17() __attribute__((weak)) {}
extern void trigger18() __attribute__((weak)) {}
extern void trigger19() __attribute__((weak)) {}
extern void trigger20() __attribute__((weak)) {}
extern void trigger21() __attribute__((weak)) {}
extern void trigger22() __attribute__((weak)) {}
extern void trigger23() __attribute__((weak)) {}
extern void trigger24() __attribute__((weak)) {}
extern void trigger25() __attribute__((weak)) {}
extern void trigger26() __attribute__((weak)) {}
extern void trigger27() __attribute__((weak)) {}
extern void trigger28() __attribute__((weak)) {}
extern void trigger29() __attribute__((weak)) {}
extern void trigger30() __attribute__((weak)) {}
extern void trigger31() __attribute__((weak)) {}
extern void trigger32() __attribute__((weak)) {}
extern void trigger33() __attribute__((weak)) {}
extern void trigger34() __attribute__((weak)) {}
extern void trigger35() __attribute__((weak)) {}
extern void trigger36() __attribute__((weak)) {}
extern void trigger37() __attribute__((weak)) {}
extern void trigger38() __attribute__((weak)) {}
extern void trigger39() __attribute__((weak)) {}
extern void trigger40() __attribute__((weak)) {}
extern void trigger41() __attribute__((weak)) {}
extern void trigger42() __attribute__((weak)) {}
extern void trigger43() __attribute__((weak)) {}
extern void trigger44() __attribute__((weak)) {}
extern void trigger45() __attribute__((weak)) {}
extern void trigger46() __attribute__((weak)) {}
extern void trigger47() __attribute__((weak)) {}
extern void trigger48() __attribute__((weak)) {}
extern void trigger49() __attribute__((weak)) {}
extern void trigger50() __attribute__((weak)) {}

#endif
