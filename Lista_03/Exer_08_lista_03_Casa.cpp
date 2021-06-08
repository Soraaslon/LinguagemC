#include<stdio.h>
#include<conio.h>

int main()
{
	int D;
	printf ("os numeros pares entre 1 e 20 sao:\n");
	D=1;
	do{
		if(D%2==0){
		printf("%i\n",D);}
		D++;
	}
	while (D<=20);
	getch();
	return 0;
}
