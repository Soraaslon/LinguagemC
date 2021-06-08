#include<stdio.h>
#include<conio.h>
#include<math.h>

int calculo(int v2, int v1);

int main()
{
	int bas,que,na;
	printf("Digite um numero:\n");
	scanf("%i",&bas);
	printf("Digite a potencia desse numero:\n");
	scanf("%i",&que);
	na=calculo(bas,que);
	printf("O resultado eh: %i", na);
	
	getch();
	return 0;
}
	
	
	
int calculo(int v1, int v2){
	int te;
	te=pow(v1,v2);
	return te;
}
	
	
	
	
