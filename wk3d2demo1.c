// our program with scanf input function
#include <stdio.h>
int main(void) 
{
	int id;			    //student's id number
	int num_classes;	//number of classes
	float gpa;		    //grade point average
	char relationship;	//relationship status
    char blank;
	
	printf("Please enter your id number:");
	scanf("%d", &id);

	printf("Please enter number of classses you take in Fall 2018:");
	scanf("%d", &num_classes);

	printf("Please enter your excellent gpa with 2 decimal places:");
	scanf("%f", &gpa);

	printf("Enter your relationship status Single(s) Married(m)");
	scanf(" %c", &relationship);}
