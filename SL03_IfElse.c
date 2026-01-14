#include <stdio.h>

int main(){
	float score;
	printf("Input your score: ");
	scanf("%f", &score);
	
	if (score >= 5 && score <=10)
		printf("Your score is %.2f then you passed.", score);
	else if (score >= 0 && score < 5)	
			printf("Your score is %.2f then you failed.", score);
		 else
		 	printf("%.2f is not a score. Please double check!",score);	
	
	int stipend = score >= 8 ? 500000 : 0;
	printf("\nYour score is %.2f then your stipend is %d", score, stipend);	
	
	printf("\n");
	int age;
	printf("Input your age: "); scanf("%d", &age);
	if (age>=18)
		printf("You can get married.\n");
	else
		printf("Keep calm, please wait...\n");	
	printf("\n");
	
	
			
		
	return 0;
}
