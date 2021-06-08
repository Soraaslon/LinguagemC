#include<stdio.h>
#include<conio.h>

int main()
{
	int u;
	u=20;
	printf("Os numeros pares de 20 a 1 sao:\n");
	while(u>=1){
	if (u%2==0){
		printf("%i\n",u);
	}
	u--;
	}
	getch();
	return 0;
}
