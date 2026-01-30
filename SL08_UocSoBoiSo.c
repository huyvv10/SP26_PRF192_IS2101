#include <stdio.h>
void menu();
int uocSoChungLonNhat(int a, int b);
int gcd(int a, int b);
int boiChungNhoNhat(int a, int b);
void listDivisor(int n);
int countDivisor(int n);
int sumDivisor(int n);

int main() {
	int sel, a, b;
	do {
		menu();
		scanf("%d", &sel);
		getchar();
		switch (sel) {
			case 1:
				printf("Input a = "); scanf("%d", &a);
				printf("Input b = "); scanf("%d", &b);
				printf("Great commond divisor of %d and %d is %d\n", a, b, uocSoChungLonNhat(a,b));
				printf("Great commond divisor of %d and %d is %d\n", a, b, gcd(a,b));
				break;
			case 2:
				printf("Input a = "); scanf("%d", &a);
				printf("Input b = "); scanf("%d", &b);
				printf("Boi chung nho nhat cua %d va %d la: %d", a, b, boiChungNhoNhat(a,b));				
				break;
			case 3:
				printf("Input a = "); scanf("%d", &a);
				printf("List divisors of %d are: ", a);
				listDivisor(a);				
				break;
			case 4:
				printf("Input a = "); scanf("%d", &a);
				printf("The number divisors of %d: %d", a, countDivisor(a));
				break;
			case 5:
				printf("Input a = "); scanf("%d", &a);
				printf("The total value of divisors of %d: %d", a, sumDivisor(a));
				break;
			case 0:
				printf("Goodbye.!");
				break;
			default:
				printf("Invalid selection. Please select again.\n");
		}
	} while (sel!=0);

	return 0;
}

void listDivisor(int n){
	int i;
	for (i=1; i<=n/2; i++)
		if (n%i==0)
			printf("%d ", i);
	printf("%d", n);		
}

int countDivisor(int n){
	int i, count=0;
	for (i=1; i<=n/2; i++)
		if (n%i==0) count++;
	return count+1;
}

int sumDivisor(int n){
	int i, S=0;
	for (i=1; i<=n/2; i++)
		if (n%i==0) S+=i;
	return S+n;
}
int boiChungNhoNhat(int a, int b){
	return a==b ? a : a>b ? b*a/gcd(a,b) : a*b/gcd(a,b);	
}

int gcd(int a, int b){
	return b==0 ? a : gcd(b, a%b);
}

int uocSoChungLonNhat(int a, int b){
	while (a!=b){
		if (a>b)
			a = a - b;
		else
			b = b - a;	
	}
	return a;
}

void menu() {
	printf("\n----- My program -----\n");
	printf("1. Tim uoc so chung lon nhat\n");
	printf("2. Tim boi so chung nho nhat\n");
	printf("3. Liet ke cac uoc so cua mot so\n");
	printf("4. Dem so luong cac uoc so cua mot so\n");
	printf("5. Tinh tong cac uoc so cua mot so\n");
	printf("6. Liet ke so hoan hao trong mot khoang\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
