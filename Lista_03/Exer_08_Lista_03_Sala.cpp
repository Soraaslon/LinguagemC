#include<conio.h>
#include<stdio.h>

int main()
{
	int r,e,a,l;
	r=1;
	e=1;
	a=0;
	while (r<=15){
	printf("%i, ",e);
	e=e+a;
	a=e-a;
	r++;
	}
	
	getch();
	return 0;
}
