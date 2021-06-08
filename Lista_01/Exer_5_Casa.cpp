#include<conio.h>
#include<stdio.h>

int main()
{
	float A,M,IMC;
	printf("Digite a altura:");
	scanf("%f",&A);
	printf("Digite a massa:");
	scanf("%f",&M);
	IMC=M/(A*A);
	printf("O IMC eh:%2.f",IMC);
	
	getch();
	
	return 0;
}
