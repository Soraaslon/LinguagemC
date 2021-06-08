#include<stdio.h>
#include<conio.h>

int main()
{
	int A[5],B[5],C[10],t;
	printf("valores de A:\n");
	for(t=1;t<=5;t++){
		scanf("%i",&A[t]);}    
	printf("valores de B:\n");
	for(t=1;t<=5;t++){
		scanf("%i",&B[t]);}
	printf("Os valores de C:");
	for(t=1;t<=5;t++){
		C[t]=A[t];}
	for(t=1;t<=5;t++){
		C[t+5]=B[t];}
	for(t=1;t<=10;t++){	
		printf("\n%i",C[t]);}
		getch();
		return 0;
}
