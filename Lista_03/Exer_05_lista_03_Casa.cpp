#include<conio.h>
#include<stdio.h>

int main()
{
	int b;
	printf("Os numeros impares de 1 a 20 sao:\n");
	for(b=1;b<=20;b++){
		if(b%2==1){
		printf("%i\n",b);}
	}
	getch();
	return 0;
}
