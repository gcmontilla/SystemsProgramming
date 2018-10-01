#include <stdio.h>
int main() 
{
	int d1;
	int m1;
	int y1;
	printf("Please enter today's date-ddsmmsyyyy:");
	scanf("%ds%ds%d", &d1, &m1, &y1);
	printf("Date you entered was:%d %d %d\n", d1, m1, y1);
	printf("Enter date-dd/mm/yyyy:");
	scanf("%d*c%d*c%d", &d1, &m1, &y1);
	printf("Date you entered was : %d %d %d\n", d1, m1, y1);
	return 0;
}
