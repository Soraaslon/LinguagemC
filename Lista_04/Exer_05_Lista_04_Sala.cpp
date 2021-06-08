#include<stdio.h>
#include<conio.h>

int main()
{
	int g[20],x[30],b[50],z;
	printf("Digite 20 numeros para A:\n");
	for(z=1;z<=20;z++){
		scanf("%i",&g[z]);}
		printf("Digite 30 valores para B:\n");
	for(z=1;z<=30;z++){
		scanf("%i",&x[z]);}
	z=1;
	while(z<=20){
		b[z]=g[z];
		z++;}
		z=1;
		do{
			b[z+20]=x[z];
			z++;
		}
		while(z<=30);
		printf("C:");
		for(z=1;z<=50;z++){
			printf("\n%i",b[z]);}
		getch();
		return 0;
}

