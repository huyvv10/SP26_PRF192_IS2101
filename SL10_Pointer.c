#include <stdio.h>

int main(){
	int n = 7, m = 10;
	int *pI;			//Khai bao TH1
	pI = &n;			//Gan gia tri TH1 - Con tro pI tro vao n
	int *pM = &m;		//Khai bao va khoi tao gia tri TH2
//	int* pI;			//1 con tro
//	int* pI, *pA, pM;	//2 con tro va 1 bien thuong
	printf("Gia tri cua n = %d\n", n);
	printf("Dia chi cua n = %x\n", &n);
	printf("Gia tri cua con tro pI = %d\n", *pI);
	printf("Dia chi ma con tro pI tro den: %x\n", pI);
	printf("Dia chi cua ban than con tro pI: %x\n", &pI);
	printf("\n");

	*pI = 15;			//Gan gia tri cho con tro pI
	printf("Gia tri cua n = %d\n", n);
	printf("Dia chi cua n = %x\n", &n);
	printf("Gia tri cua con tro pI = %d\n", *pI);
	printf("Dia chi ma con tro pI tro den: %x\n", pI);
	printf("Dia chi cua ban than con tro pI: %x\n", &pI);	
	printf("\n");	
	
	pI = &m;			//Con tro pI tro vao m
	printf("Gia tri cua n = %d\n", n);
	printf("Dia chi cua n = %x\n", &n);
	printf("Gia tri cua m = %d\n", m);
	printf("Dia chi cua m = %x\n", &m);	
	printf("Gia tri cua con tro pI = %d\n", *pI);
	printf("Dia chi ma con tro pI tro den: %x\n", pI);
	printf("Dia chi cua ban than con tro pI: %x\n", &pI);
	printf("\n");	
	return 0;
}
