#include<conio.h>
#include<stdio.h>

int main()
{
	int A,B,C;
	printf("Escreva o valor de A:");
	scanf("%d",&A);
	printf("Escreva o valor de B:");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("O Novo valor de A eh:%d",A);
	printf(" e o Novo valor de B eh:%d",B);
	
	getch();
	
	return 0;
}
