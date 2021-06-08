#include <stdio.h>
#include <conio.h>

int main()
{
    int a,*pa;
	a=20;
	pa=&a;
	*pa=2;
	printf("%i",a);
	
	getch();
	return 0;	
}
