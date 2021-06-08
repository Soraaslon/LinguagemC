#include<stdio.h>
#include<conio.h>

int val,tax,tem;
int entrada();
int exib(int val,int tem,int tax);

int main()
{
	//prest=valor + (valor * (taxa/100) * tempo).
    entrada();
    exib(val,tem,tax);
	
	getch();
	return 0;

}
int entrada(){
	printf("Digite o valor:");
	scanf("%i",&val);
	printf("Digite o tempo:");
	scanf("%i",&tem);
	printf("Digite a taxa:");
	scanf("%i",&tax);}

int exib(int val, int tem, int tax)
{
	int pr;
	pr=(val+(val*(tax/100)*tem));
	printf("A prestacao eh: %i",pr);
}

