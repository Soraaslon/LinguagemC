#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,s;
	a=0;
	while(a<=15){
	s=pow(3,a);
	printf("3^%i=%i\n",a,s);
	a++;}
	getch();
	return 0;
}
