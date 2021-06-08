#include<stdio.h>
#include<conio.h>

int main()
{
	int l;
	l=15;
	do{
		printf("%ix%i=%i, ",l,l,l*l);
		l++;
	}
	while (l<=200);
	
	getch();
	return 0;
}
