#include<stdio.h>
#include<conio.h>


int exib(int *val,int *tem,int *tax);
int *pre;

int main()
{
	//prest=valor + (valor * (taxa/100) * tempo).
    int val,tax,tem;
	printf("Digite o valor:");
	scanf("%i",&val);
	printf("Digite o tempo:");
	scanf("%i",&tem);
	printf("Digite a taxa:");
	scanf("%i",&tax);
    exib(&val,&tem,&tax);
	printf("A prestacao eh: %i",*pre);
	
	getch();
	return 0;

}

int exib(int *val, int *tem, int *tax)
{
	int pr;
	pr=(*val+(*val*(*tax/100)**tem));
	pre=&pr;
	return 0;
	
}

