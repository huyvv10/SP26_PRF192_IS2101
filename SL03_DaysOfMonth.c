#include <stdio.h>

int main(){
	int m, y;
	printf("Input a month: "); scanf("%d", &m);
	printf("Input a year: "); scanf("%d", &y);

	switch (m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("The month %d/%d has 31 days.", m, y);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The month %d/%d has 30 days.", m, y);
			break;			
		case 2:
			{
				if (y%400 == 0 || (y%4 == 0 && y%100 != 0))
					printf("The month %d/%d has 29 days.", m, y);
				else
					printf("The month %d/%d has 28 days.", m, y);					
				break;
			}
		default:
			printf("%d is not a month of the year.",m);			
	}
	return 0;
}
