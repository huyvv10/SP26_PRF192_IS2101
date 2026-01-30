#include <stdio.h>
void menu();

int main() {
	int sel;
	do {
		menu();
		scanf("%d", &sel);
		getchar();
		switch (sel) {
			case 1:
				break;
			case 2:
				break;
			case 3:
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

void menu() {
	printf("\n----- My program -----\n");
	printf("1. Kiem tra so nguyen to\n");
	printf("2. Tim uoc so chung lon nhat\n");
	printf("3. Tim boi so chung nho nhat\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}

