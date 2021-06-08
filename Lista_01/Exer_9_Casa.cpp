#include<conio.h>
#include<stdio.h>

int main()
{
	float P1,P2,A,M;
	printf("Escreva a nota da prova 1:");
	scanf("%f",&P1);
	printf("Escreva a nota da prova 2:");
	scanf("%f",&P2);
	printf("Escreva a nota das atividades:");
	scanf("%f",&A);
	M=((P1*4)+(P2*4)+(A*2))/10;
	printf("A media eh:%f",M);
	
	getch();
	
	return 0;
}
