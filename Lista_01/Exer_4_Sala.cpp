#include<conio.h>
#include<stdio.h>

int main()
{
	float A,B,C;
	printf("Digite o valor de A:");
	scanf("%f", &A);
	printf("Digite o valor de B:");
	scanf("%f", &B);
	C=A;
	A=B;
	B=C;
	printf("O valor de A eh: %f O valor de B eh: %f",A ,B);
	
	getch();
	
	return 0;
}
