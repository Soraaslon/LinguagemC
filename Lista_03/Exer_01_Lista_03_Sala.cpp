#include<conio.h>
#include<stdio.h>

int main()
{
	int e;
    printf("Numeros impares de 0 a 20:\n");
	while (e<=20){
	if (e%2==1)
	printf("%i\n",e);
	e++;}
	
	getch();
	return 0;
}
