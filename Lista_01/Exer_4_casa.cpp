#include<conio.h>
#include<stdio.h>

int main()
{
	float a,b,A,P;
	printf("Digite o valor da altura:");
	scanf("%f",&a);
	printf("Digite o valor da largura:");
	scanf("%f",&b);
	A=a*b;
	P=(2*a)+(2*b);
	printf("A area eh:%.2f e o perimetro eh:%.2f",A,P);
	
	getch();
	
	return 0;
}
