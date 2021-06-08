#include<conio.h>
#include<stdio.h>

int main()
{
	int t,e;
	printf("Coloque um numero da tabuada: ");
	scanf("%i",&e);
	t=0;
	while(t<=10) {
	printf("%ix%i=%i\n",e,t,e*t);
	t++;
}
    getch();
    return 0;
}
