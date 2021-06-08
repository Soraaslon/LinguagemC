#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int e,n,d;
	printf("Digite um numero qualquer:");
	scanf("%i",&e);
	printf("Digite uma potencia qualquer:");
	scanf("%i",&n);
	d=pow(e,n);
	printf("%i^%i=%i",e,n,d);
	
	getch();
	return 0;
}
