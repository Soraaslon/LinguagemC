#include<stdio.h>
#include<conio.h>

int main()
{
	int o;
	printf("Os numeros de 20 a 1 que sao pares e impares sao:\n");
	for(o=20;o>=1;o--){
	if(o%2==0){
		printf("Par:%i\n",o);
	}
	else{
		printf("Impar:%i\n",o);
	}
    }
    getch();
    return 0;
}
