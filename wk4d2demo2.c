#include <stdio.h>
// Caculate total bill after discount
// If >100, 10% discount

int main() {
	float amount;
	float discount;
	float total;
	printf("Please enter the amount - ");
	scanf("%f", &amount);
	if (amount > 100) 
		discount = 0.1;
	else
		discount = 0.0;

	total = amount - (amount * discount);
	printf("Your total bill after discount is: %8.2f\n", total);
	return 0;
}

