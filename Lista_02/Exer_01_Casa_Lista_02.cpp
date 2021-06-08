#include<stdio.h>
#include<conio.h>

int main()
{
	int N;
	printf("Digite um numero inteiro:");
	scanf("%i",&N);
	if (N%2==0)
	printf("O numero %i eh par",N);
	else
	printf("O numero %i eh impar",N);
	
	getch();
	
	return 0;
}
