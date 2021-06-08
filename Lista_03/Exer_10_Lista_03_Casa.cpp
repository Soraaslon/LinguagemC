#include<stdio.h>
#include<conio.h>

int main()
{
	int m,a;
	char o;
	while(o!='E'){
	printf("Digite uma das 4 operacoes basicas da matematica ou digite E para sair:\n");
	scanf("%c",&o);
	if (o=='E'){
	printf("Fechando Calculadora");
	return 0;}
	switch (o){
		case '+':printf("Digite Um valor:\n");
		scanf("%i",&m);
		printf("Digite Um valor:\n");
		scanf("%i",&a);
		printf("O Resultado eh:%i\n",m+a);break;
		case '-':printf("Digite Um valor:\n");
		scanf("%i",&m);
		printf("Digite Um valor:\n");
		scanf("%i",&a);
		printf("O Resultado eh:%i\n",m-a);break;
		case '*':printf("Digite Um valor:\n");
		scanf("%i",&m);
		printf("Digite Um valor:\n");
		scanf("%i",&a);
		printf("O Resultado eh:%i\n",m*a);break;
		case '/':printf("Digite Um valor:\n");
		scanf("%i",&m);
		printf("Digite Um valor:\n");
		scanf("%i",&a);
		printf("O Resultado eh:%i\n",m/a);break;
		default:printf("Opcao Invalida\n");break;
	}
    }
	getch();
	return 0;
}
