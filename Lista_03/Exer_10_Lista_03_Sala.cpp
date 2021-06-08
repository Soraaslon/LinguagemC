#include<stdio.h>
#include<conio.h>

int main()
{
	int x,p;
	p=0;
	for(x=1;x<=500;x++)
	{
		if (x%2==0){
		p=p+x;}
	}
	printf("A soma dos 500 primeiros numeros pares eh: %i",p);

	getch();
	
	return 0;
}
