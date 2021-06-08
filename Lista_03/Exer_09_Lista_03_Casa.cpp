#include<stdio.h>
#include<conio.h>

int main()
{
	int C;
	C=1;
	printf("Os numeros pares e impares de 1 a 20 sao:\n");
	do{
		if(C%2==1){
			printf("Impar:%i\n",C);
		}
		else {
			printf("Par:%i\n",C);
		}
		C++;
	}
	while(C<=20);
	getch();
	return 0;
}
