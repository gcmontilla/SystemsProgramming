#include <stdio.h>

float manager_pay(float salary);
float hourly_pay(int hours, float wage);
float commission_pay(float sales);
float piece_pay(float price, int amount);

int main()
{
    int code;
    float pay = 0;
    float salary;
    int hours;
    float wage;
    float sales;
    float price;
    int amount;
    
    printf("Enter the correct employee code or [-1] to quit ");
    scanf("%d", &code);
    
    do {
        switch (code) {
            case 1:
                printf("Enter weekly salary ");
                scanf("%f", &salary);
                pay = manager_pay(salary);
                break;
            case 2:
                printf("Enter amount of hours worked ");
                scanf("%d", &hours);
                printf("Enter hourly wage - ");
                scanf("%f", &wage);
                pay = hourly_pay(hours, wage);
                break;
            case 3:
                printf("Enter amount of weekly sales ");
                scanf("%f", &sales);
                pay = commission_pay(sales);
                break;
            case 4:
                printf("Enter the price of the item sold ");
                scanf("%f", &price);
                printf("Enter the amount of items sold ");
                scanf("%d", &amount);
                pay = piece_pay(price, amount);
                break;
            default:
                printf("Incorrect employee code %d\n", code);
                break;
        }
        printf("Pay = %10.2f\n\n", pay);
        printf("Enter the correct employee code ");
        scanf("%d", &code);
        
    } while (code != -1);
    
    
    
    return 0;
}

float manager_pay(float salary) {
    return salary;
}

float hourly_pay(int hours, float wage) {
    int overtime = ((hours - 40) > 0) ? (hours-40) : 0;
    float pay = (overtime != 0) ? ((hours-40) * wage) + (overtime * wage * 1.5) : hours * wage;
    return pay;
}

float commission_pay(float sales) {
    return 250 + (1.057 * sales);
}

float piece_pay(float price, int amount) {
    return price * amount;
}
