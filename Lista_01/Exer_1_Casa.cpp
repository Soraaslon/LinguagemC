#include<conio.h>
#include<stdio.h>

int main()
{
	float R,D;
	printf("Digite o valor em reais:");
	scanf("%f",&R);
	D=R/2.40;
	printf("O valor em dolares eh:%.2f",D);
	
	getch();
	
	return 0;
}
