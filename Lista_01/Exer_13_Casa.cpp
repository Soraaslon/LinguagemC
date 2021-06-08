#include<conio.h>
#include<stdio.h>

int main()
{
	float S,T,S0,V0,A;
    S0=2.0;
	V0=3.0;
	A=10.0;
	printf("Digite o Tempo (s):");
	scanf("%f",&T);
    S=(S0+V0)*T+((1/2)*A*(T*T));
	printf("O Valor do movimento uniforme variado eh:%f",S);
	
	getch();
	
	return 0; 
}
