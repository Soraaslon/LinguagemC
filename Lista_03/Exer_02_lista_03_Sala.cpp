#include<stdio.h>
#include<conio.h>

int main()
{
	int a,s;
	s=0;
	for(a=0;a<=100;a++)
	{
		s=s+a;
	}
	printf("A soma dos 100 primeiros numeros inteiros eh: %i",s);
	
	getch();
	
	return 0;
}
