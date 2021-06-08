#include<stdio.h>
#include<conio.h>

int main()
{
	int l;
	printf("Os numeros de 1 a 20 sao:\n");
	l=1;
	do {
		printf("%i\n",l);
		l++;
	}
	while(l<=20);
	getch();
	return 0;
}
