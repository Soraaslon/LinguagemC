#include<stdio.h>

int ent();
int sai(int f);

int main(){
	int n;
	n=ent();//variavel que recebera o valor da função
	sai(n); //valor de 'n' entrando na função
	return 0;
}

int ent(){
	int e;
	printf("Digite a quantidade de termos que serao exibidos da sequencia de fibonacci:\n");
	scanf("%i",&e);
	return e; /* o return serve para retornar um valor , mas ele só funcionara se tiver alguma variavel para recebelo na main,
	mas se ele for uma global não é necessario retornalo nem colocalo no parametro.*/
}

int sai(int f){ //entrada do valor 'n' que vai para a variavel f
	int a=0,b=1,i;
	for(i=1;f>=i;f--){
		printf("%i, ",b);
		b=b+a;
		a=b-a;
	}
}
