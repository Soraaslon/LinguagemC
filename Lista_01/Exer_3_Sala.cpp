#include<stdio.h>
#include<conio.h>

int main()
{
	float A,R,Velo;
	printf("Digite a altura da lata:");
	scanf("%f",&A);
	printf("Digite o raio da lata:");
	scanf("%f",&R);
	Velo=3.14159*R*R*A;
	printf("O volume da lata eh: %f", Velo);
	
	getch();
	
	return 0;	
}
