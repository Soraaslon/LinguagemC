#include<stdio.h>
#include<conio.h>

int main()
{
	int t;
	t=1;
	printf("Os numeros pares e impares de 1 a 20 sao:\n");
	while(t<=20) {
		if (t%2==0){
			printf("Par:%i\n",t);
		}
		else {
			printf("Impar:%i\n",t);
		}
		t++;
	}
	getch();
	return 0;
}
