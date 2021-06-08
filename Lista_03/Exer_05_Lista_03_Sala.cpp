#include<stdio.h>
#include<conio.h>

int main()
{
	int c;
	for (c=1;c<200;c++)
	if (c%4==0)
	printf("%i, ",c);
	getch();
	return 0;
}
