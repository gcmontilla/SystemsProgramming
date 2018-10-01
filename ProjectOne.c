/******************* Program Identification ************************************************/
/* Student Name: Gregory Montilla*/                                                                                                
/* Student ID:002670726*/
/* COURSE: CS 230*/
/* ASSIGNMENT #: Project One*/
/* DUE DATE: 09/19/18*/
/* SOURCE FILE:  ProjectOne.c*/
/* ********************************************************************************************/

/**************** Program Description ****************************************************/
/* INPUT: mass of object, gravity, stokes's value, viscosity						                  */
/* OUTPUT: velocity of object			                  */
/* USER-DEFINED MODULES (FUNCTIONS): velocity	                             */
/* PROCESS:		...................					                             */
/* *******************************************************************************************/

#include <stdio.h>
/* All of your Functions are included here */
float velocity(float m, float g, float B, float u);

/*******************************************************************************************/
/* 				MAIN PROGRAM					     */
/*******************************************************************************************/
int main(void)
{
     /* Initialize variables if needed */
	float g;
	float u;
    float mass;
    float stokes;
    float v;

    /* The body of the program goes here */
    printf("This program will calculate the velocity of an object in free-fall in fluid\n");
    printf("Enter the gravity of the object - ");
    scanf("%f", &g);
    printf("Enter the viscosity of the fluid with respect to the object - ");
    scanf("%f", &u);
    printf("Please enter the mass of the object - ");
    scanf("%f", &mass);
    printf("Please enter the Stoke's Value of the object - ");
    scanf("%f", &stokes);
    
    v = velocity(mass, g, stokes, u);
    printf("The velocity is %f\n", v);
    printf("\n\n\n");
	
    return 0;
}

float velocity(float m, float g, float B, float u)
{
    return (m*g)/(B*u);
}
