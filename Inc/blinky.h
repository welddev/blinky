/*
* File Name: blinky.h
*
* Code generated for blinky using API: v0.1.5.
*
* Author						: <author>	
* Application Version			: <appVersion>
* C source code generated on    : Sat, 26 Dec 2020 04:32:37 GMT
*
*/

#include "stdint.h"


//Max value that a timer can keep
#ifndef wD_TIMER_MAX
#define wD_TIMER_MAX(x)   ((1<<((sizeof(x)*8)))-1)
#endif

//Increment the timer
#ifndef wD_TIMER_INCREMENT
#define wD_TIMER_INCREMENT(x)          x = (wD_TIMER_MAX(x) ^ x) ? x++ : x
#endif

//Increment and compare the timer
#ifndef wD_TIMER_INCCOMP
#define wD_TIMER_INCCOMP(x, y)          ((uint8_t)((++x >= y) ? 1 : 0))
#endif

//Reset the timer
#ifndef wD_TIMER_RESET
#define wD_TIMER_RESET(x)  x = 0
#endif

//Compare the timer with a reference time
#ifndef wD_TIMER_COMPARE
#define wD_TIMER_COMPARE(x, y)  (x >= y)
#endif


//8-bit timer type definition
typedef uint8_t     wT_TIMER8; 

//16-bit timer type definition
typedef uint16_t    wT_TIMER16;

//32-bit timer type definition
typedef uint32_t    wT_TIMER32;

//64-bit timer type definition
typedef uint64_t    wT_TIMER64;



typedef enum{
	wS_INACTIVE= 0,
	wS_IN_blink_state,
}Active_State;

void wF_init(void);

void run_blink_thread_1000hz(void);
