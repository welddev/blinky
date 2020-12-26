/*
* File Name: blinky.c
*
* Code generated for blinky using API: v0.1.5.
*
* Author						: <author>	
* Application Version			: <appVersion>
* C source code generated on    : Sat, 26 Dec 2020 04:32:37 GMT
*
*/

//Include user defined headers.
#include "main.h"

//Include generated header.
#include "blinky.h"

static wT_TIMER16 wT_TIMER1;

static Active_State wS_blink_thread = wS_INACTIVE;


/*
* This function initializes the variables that are required
* for the operation of generated code.
* This function should be called once before the main thread function
* is called. Please include the generated headers in your main.c file and 
* call this function before initializing the peripherals.
*/
void wF_init(void){
}

void run_blink_thread_1000hz(void){
	switch(wS_blink_thread){
		case wS_IN_blink_state:
			if(wD_TIMER_INCCOMP(wT_TIMER1, 999)){
				HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
				wD_TIMER_RESET(wT_TIMER1);
			}
			break;
		default:
			
			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
			wD_TIMER_RESET(wT_TIMER1);
			wS_blink_thread = wS_IN_blink_state;
	}

}
