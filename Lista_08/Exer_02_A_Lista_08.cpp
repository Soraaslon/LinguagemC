#include<stdio.h>
#include<conio.h>

int a,b;
int somaant(int a);
int ent(int a);

int main()
{
	a=ent(a);
	somaant(a);
	getch();
	return 0;
}

int somaant(int a)
{
	for(b=0;a>0;a--){
		b=b+a;}
	printf("-O resultado eh: %i",b);
	return 0;
}	

int ent(int a){
printf(" - Digite um numero e sera exibido a soma de seus antecessores - \n");
	scanf("%i",&a);
	return a;}
