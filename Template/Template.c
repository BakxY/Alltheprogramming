/*-----------------------------------
* Project:  "Project Title"			*
* Autor:    "Your Name"				*
* Date:     "Date of commit"		*
* Dep:      b4 microcontrollers		*
* uC:       STM32F107VC				*
------------------------------------*/

/*----------Libraries---------------*/
#include <stm32f10x.h>								//include header file for uC
#include "TouchP0P1.h"								//include header file for display
/*----------Defines-----------------*/
//found in GIT defines.c
#define true 1
#define false 0
/*----------Variables---------------*/
//local variables are prefered

/*----------User functions----------*/
//found in GIT user_functions.c

/*----------User code---------------*/
int main(void) 										//main function
{
	
	InitTouchP0P1("1r");								//Display initialisation r -> rotated display
	
	while (1)
	{
		//write epic 10/10 code here
	}
}