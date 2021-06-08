#include<conio.h>
#include<stdio.h>

int main()
{
	float R,D;
	printf("Digite o valor em dolar:");
	scanf("%f",&D);
	R=D*2.40;
	printf("O valor em reais eh:%.2f",R);
	
	getch();
	
	return 0;
}
