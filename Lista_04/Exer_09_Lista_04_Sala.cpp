#include<conio.h>
#include<stdio.h>

int main()
{
	int x;
	printf("Digite um numero de 1 a 5\n");
	scanf("%i",&x);
	switch(x){
		case 1:printf("Engenharia");break;
		case 2:printf("Edificacoes");break;
		case 3:printf("Sistemas Eletricos");break;
		case 4:printf("Turismo");break;
		case 5:printf("Analise de Sistemas");break;
		default :printf("Nao eh um numero valido");
	}
	getch();
	return 0;
}
