#include<conio.h>
#include<stdio.h>

int main()
{
	int t,e;
	printf("Coloque um numero da tabuada: ");
	scanf("%i",&e);
	for (t=1;t<=10;t++)
	printf("%ix%i=%i\n",e,t,e*t);
    getch();
    return 0;
}

