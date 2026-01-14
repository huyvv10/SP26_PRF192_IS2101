#include <stdio.h>

int main() {
	int n;
	printf("Nhap giai thuong ban nhan duoc: ");
	scanf("%d", &n);

	switch(n) {
		case 1:
			printf("Ban dat giai nhat, so tien thuong la 1000000.");
			break;
		case 2:
			printf("Ban dat giai nhi, so tien thuong la 500000.");
			break;
		case 3:
			printf("Ban dat giai nhat, so tien thuong la 200000.");
			break;
		case 4:
			printf("Ban dat giai khuyen khich, so tien thuong la 50000.");
			break;
		default:
			printf("Chuc ban may man lan sau.");
	}

	return 0;
}
