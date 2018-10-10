
/******************* Program Identification **************************************************/
/* Student Name: Gregory Montilla*/
/* Student ID:002670726*/
/* COURSE: CS 230*/
/* ASSIGNMENT #: Project Three*/
/* DUE DATE: 10/08/18*/
/* SOURCE FILE:  ProjectThree.c*/
/* *******************************************************************************************/

/**************** Program Description ********************************************************/
/* INPUT: code, salary, hours, wage, sales, price, amount                                    */
/* OUTPUT: pay of a worker                                                                   */
/* USER-DEFINED MODULES (FUNCTIONS): manager_pay, hourly_pay, commission_pay, piece_pay      */
/* PROCESS: asks user for their employee code and then returns their weekly pay              */
/* *******************************************************************************************/

#include <stdio.h>
/* All of your Functions are included here */
float manager_pay(float salary);
float hourly_pay(int hours, float wage);
float commission_pay(float sales);
float piece_pay(float price, int amount);

/*********************************************************************************************/
/*                 MAIN PROGRAM                         */
/*********************************************************************************************/
int main()
{
    int code;
    int managers = 0;
    int hourly_workers = 0;
    int commission_workers = 0;
    int pieceworkers = 0;
    float pay = 0;
    float salary;
    float hours;
    float wage;
    float sales;
    float price;
    int amount;
    
    printf("Enter the correct employee code or [-1] to quit ");
    scanf("%d", &code);
    
    do {
        printf("\n");
        switch (code) {
            case 1:
                managers++;
                printf("Manager:\nEnter weekly salary ");
                scanf("%f", &salary);
                pay = manager_pay(salary);
                break;
            case 2:
                hourly_workers++;
                printf("Hourly Worker:\nEnter amount of hours worked ");
                scanf("%f", &hours);
                printf("Enter hourly wage ");
                scanf("%f", &wage);
                pay = hourly_pay(hours, wage);
                break;
            case 3:
                commission_workers++;
                printf("Commission Worker:\nEnter amount of weekly sales ");
                scanf("%f", &sales);
                pay = commission_pay(sales);
                break;
            case 4:
                pieceworkers++;
                printf("Pieceworker:\nEnter the price of the item sold ");
                scanf("%f", &price);
                printf("Enter the amount of items sold ");
                scanf("%d", &amount);
                pay = piece_pay(price, amount);
                break;
            default:
                printf("Incorrect employee code %d\n", code);
                break;
        }
        printf("Pay $%.2f\n\n", pay);
        printf("Enter the correct employee code ");
        scanf("%d", &code);
        
    } while (code != -1);
    
    printf("Number of managers paid: %d\n", managers);
    printf("Number of hourly workers paid: %d\n", hourly_workers);
    printf("Number of commission workers paid: %d\n", commission_workers);
    printf("Number of pieceworkers paid: %d\n", pieceworkers);
    
    return 0;
}

float manager_pay(float salary) {
    return salary;
}

float hourly_pay(int hours, float wage) {
    int overtime = ((hours - 40) > 0) ? (hours-40) : 0;
    float pay = (overtime != 0) ? (40 * wage + overtime * wage * 1.5) : hours * wage;
    return pay;
}

float commission_pay(float sales) {
    return 250 + (.057 * sales);
}

float piece_pay(float price, int amount) {
    return price * amount;
}
