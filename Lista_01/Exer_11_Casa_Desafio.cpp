#include<conio.h>
#include<stdio.h>

int main()
{
	int A,B;
	printf("Digite o valor de A:");
	scanf("%i",&A);
	printf("Digite o valor de B:");
	scanf("%i",&B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("O Valor de A eh:%i e o Valor de B eh:%i",A,B);
	
	getch();
	
	return 0;
}
