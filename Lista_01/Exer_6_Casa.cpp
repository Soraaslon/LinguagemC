#include<conio.h>
#include<stdio.h>

int main()
{
	float A,C,R;
	printf("Digite o raio da circunferencia:");
	scanf("%f",&R);
	A=3.1416*(R*R);
	printf("A area do circulo eh:%f",A);
	C=2*3.1416*R;
	printf("O comprimento do circulo eh:%f",C);
	
	getch();
	
	return 0;
}
