#include <stdio.h>
#include <string.h>

typedef struct{
	char id[9];
	char name[31];
	int age;
	float mark;	
}Student;

void inputStruct(Student std[], int n){
	int i;
	Student sv1  = {"HE210101", "Nguyen Van An", 20, 7.5};
	Student sv2  = {"HE210102", "Tran Thi Binh", 21, 8.2};
	Student sv3  = {"HE210103", "Le Minh Chau", 22, 5.8};
	Student sv4  = {"HE210104", "Pham Gia Duy", 20, 7.9};
	Student sv5  = {"HE210105", "Hoang Thi Lan", 21, 8.5};
	Student sv6  = {"HE210106", "Do Quang Huy", 22, 6.9};
	Student sv7  = {"HE210107", "Bui Thanh Tung", 20, 4.3};
	Student sv8  = {"HE210108", "Dang Thu Trang", 21, 8.1};
	Student sv9  = {"HE210109", "Nguyen Duc Manh", 22, 7.6};
	Student sv10 = {"HE210110", "Phan Thi Mai", 20, 9.7};	
	std[0] = sv1;
	std[1] = sv2;
	std[2] = sv3;
	std[3] = sv4;
	std[4] = sv5;
	std[5] = sv6;
	std[6] = sv7;
	std[7] = sv8;
	std[8] = sv9;
	std[9] = sv10;
}

void displayStruct(Student std[], int n){
	int i;
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Mark");
	printf("%-10s %-25s %-5s %5s\n", "-------", "----", "---", "----");
	for (i=0; i<n; i++){
		printf("%-10s %-25s %-5d %5.2f\n", std[i].id, std[i].name, std[i].age, std[i].mark);	
	}
}
//Display students whose mark >= xMark
void filterByMark(Student std[], int n, float xMark){
	int i;
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Mark");
	printf("%-10s %-25s %-5s %5s\n", "-------", "----", "---", "----");	
	for (i=0; i<n; i++){
		if (std[i].mark>=xMark)
			printf("%-10s %-25s %-5d %5.2f\n", std[i].id, std[i].name, std[i].age, std[i].mark);	
	}
	printf("\n");
}

//Dem so luong sv co diem nam trong khoang [x,y]
//Tinh so tuoi trung binh cua cac sv
//Cho biet sv nao co diem cao nhat/thap nhat
//Cho biet sv nao gia nhat/ tre nhat
//Thong ke so luong sv theo tuoi

//Sort student by Age ascending order
void sortByAgeAsc(Student std[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--){
			if (std[j].age<std[j-1].age){
				Student tmp=std[j];
				std[j]=std[j-1]; 
				std[j-1]=tmp;
			}
		}
}

//Sort student by Mark in descending order
void sortByMarkDesc(Student std[], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--){
			if (std[j].mark>std[j-1].mark){
				Student tmp=std[j];
				std[j]=std[j-1]; 
				std[j-1]=tmp;
			}
		}	
}

//Search student by Name
void searchByName(Student std[], int n, char *xName){
	int i;
	printf("%-10s %-25s %-5s %5s\n", "ID", "Name", "Age", "Mark");
	printf("%-10s %-25s %-5s %5s\n", "-------", "----", "---", "----");	
	for (i=0; i<n; i++){
		char tmp[31], *rs;
		strcpy(tmp, strupr(std[i].name));
		rs = strstr(tmp, strupr(xName));
		if (rs != NULL)
			printf("%-10s %-25s %-5d %5.2f\n", std[i].id, std[i].name, std[i].age, std[i].mark);
	}
}
int main(){
	int n=10;
//	printf("Input number of students: "); scanf("%d", &n);
	Student sv[n];
	inputStruct(sv, n);
	displayStruct(sv, n);
	float xMark;
	printf("Input xMark: "); scanf("%f", &xMark);
	filterByMark(sv, n, xMark);
	printf("\nSort By Age Asc\n");
	sortByAgeAsc(sv, n);
	displayStruct(sv, n);
	printf("\nSort By Mark Desc\n");
	sortByMarkDesc(sv, n);
	displayStruct(sv, n);
	printf("\nSearch by name\n");
	char xName[31];
	fflush(stdin);
	printf("Input searching name: "); gets(xName);
	searchByName(sv, n, xName);
	
	return 0;
}
