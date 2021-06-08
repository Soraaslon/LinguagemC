#include<conio.h>
#include<stdio.h>

int main()
{
	float A,B,C;
	printf("Digite tres numeros diferente:");
	scanf("%f %f %f",&A,&B,&C);
	if ((A>B)&&(A>C)&&(B>C))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",A,C,B);
	if ((A>B)&&(A>C)&&(C>B))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",A,B,C);
	if ((B>A)&&(B>C)&&(A>C))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",B,C,A);
	if ((B>A)&&(B>C)&&(C>A))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",B,A,C);
	if ((C>B)&&(C>A)&&(B>A))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",C,A,B);
	if ((C>B)&&(C>A)&&(A>B))
	printf("O maior valor, o menor valor e o valor do meio sao:%.2f %.2f %.2f",C,B,A);
	
	getch();
	
	return 0;
}
