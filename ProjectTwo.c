/******************* Program Identification ************************************************/
/* Student Name: Gregory Montilla*/
/* Student ID:002670726*/
/* COURSE: CS 230*/
/* ASSIGNMENT #: Project Two*/
/* DUE DATE: 09/26/18*/
/* SOURCE FILE:  ProjectTwo.c*/
/* ********************************************************************************************/

/**************** Program Description ****************************************************/
/* INPUT: radius                                         */
/* OUTPUT: volume of a sphere                            */
/* USER-DEFINED MODULES (FUNCTIONS): volume                                 */
/* PROCESS:        ...................                                                 */
/* *******************************************************************************************/

#include <stdio.h>
#include <math.h>
/* All of your Functions are included here */
float volume(float r);

/*******************************************************************************************/
/*                 MAIN PROGRAM                         */
/*******************************************************************************************/
int main(void)
{
    float r;
    float v;
    char dash[] = "----------";
    printf("This program will calculate the volume of a sphere\n");
    printf("Please enter the radius of the sphere - ");
    scanf("%f", &r);
    v = volume(r);
    printf("%10s%20s\n", "Radius", "Volume");
    printf("%10s%20s\n", dash, dash);
    printf("%10.2f%+20.4f\n\ns", r, v);
    return 0;
}

float volume(float r) {
    return (4*3.14*pow(r,3))/3;
}
