#include<stdio.h>
#include<conio.h>

int main()
{
	int N,NC,D;
	printf("Digite um numero inteiro:");
	scanf("%i",&N);
	NC=20;
	if ((N>=0)&&(N<=100)){
	if (N<NC){
	D=(NC-N);
	printf("A diferenca entre o numero digitado e o numero chave eh:%i",D);}	
	else
	{D=(N-NC);
	printf("A diferenca entre o numero digitado e o numero chave eh:%i",D);}
	}
	else
	printf("Numero digitado invalido");
	
	getch();
	
	return 0;
}
