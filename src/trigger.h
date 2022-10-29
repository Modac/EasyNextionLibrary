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

extern void __attribute__((weak)) easyNexReadCustomCommand() {}

extern void  __attribute__((weak)) toSleep() {}
extern void __attribute__((weak)) wakeUp() {}

// declaration of the trigger functions as weak
extern void __attribute__((weak)) trigger0() {}
extern void __attribute__((weak)) trigger1() {}
extern void __attribute__((weak)) trigger2() {}
extern void __attribute__((weak)) trigger3() {}
extern void __attribute__((weak)) trigger4() {}
extern void __attribute__((weak)) trigger5() {}
extern void __attribute__((weak)) trigger6() {}
extern void __attribute__((weak)) trigger7() {}
extern void __attribute__((weak)) trigger8() {}
extern void __attribute__((weak)) trigger9() {}
extern void __attribute__((weak)) trigger10() {}
extern void __attribute__((weak)) trigger11() {}
extern void __attribute__((weak)) trigger12() {}
extern void __attribute__((weak)) trigger13() {}
extern void __attribute__((weak)) trigger14() {}
extern void __attribute__((weak)) trigger15() {}
extern void __attribute__((weak)) trigger16() {}
extern void __attribute__((weak)) trigger17() {}
extern void __attribute__((weak)) trigger18() {}
extern void __attribute__((weak)) trigger19() {}
extern void __attribute__((weak)) trigger20() {}
extern void __attribute__((weak)) trigger21() {}
extern void __attribute__((weak)) trigger22() {}
extern void __attribute__((weak)) trigger23() {}
extern void __attribute__((weak)) trigger24() {}
extern void __attribute__((weak)) trigger25() {}
extern void __attribute__((weak)) trigger26() {}
extern void __attribute__((weak)) trigger27() {}
extern void __attribute__((weak)) trigger28() {}
extern void __attribute__((weak)) trigger29() {}
extern void __attribute__((weak)) trigger30() {}
extern void __attribute__((weak)) trigger31() {}
extern void __attribute__((weak)) trigger32() {}
extern void __attribute__((weak)) trigger33() {}
extern void __attribute__((weak)) trigger34() {}
extern void __attribute__((weak)) trigger35() {}
extern void __attribute__((weak)) trigger36() {}
extern void __attribute__((weak)) trigger37() {}
extern void __attribute__((weak)) trigger38() {}
extern void __attribute__((weak)) trigger39() {}
extern void __attribute__((weak)) trigger40() {}
extern void __attribute__((weak)) trigger41() {}
extern void __attribute__((weak)) trigger42() {}
extern void __attribute__((weak)) trigger43() {}
extern void __attribute__((weak)) trigger44() {}
extern void __attribute__((weak)) trigger45() {}
extern void __attribute__((weak)) trigger46() {}
extern void __attribute__((weak)) trigger47() {}
extern void __attribute__((weak)) trigger48() {}
extern void __attribute__((weak)) trigger49() {}
extern void __attribute__((weak)) trigger50() {}

#endif
