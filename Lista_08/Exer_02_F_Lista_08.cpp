#include<stdio.h>

int ent();
int sai(int f);

int main(){
	int n;
	n=ent();//variavel que recebera o valor da fun��o
	sai(n); //valor de 'n' entrando na fun��o
	return 0;
}

int ent(){
	int e;
	printf("Digite a quantidade de termos que serao exibidos da sequencia de fibonacci:\n");
	scanf("%i",&e);
	return e; /* o return serve para retornar um valor , mas ele s� funcionara se tiver alguma variavel para recebelo na main,
	mas se ele for uma global n�o � necessario retornalo nem colocalo no parametro.*/
}

int sai(int f){ //entrada do valor 'n' que vai para a variavel f
	int a=0,b=1,i;
	for(i=1;f>=i;f--){
		printf("%i, ",b);
		b=b+a;
		a=b-a;
	}
}
