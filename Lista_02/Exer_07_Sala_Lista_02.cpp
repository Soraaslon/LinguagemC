#include<conio.h>
#include<stdio.h>

int main()
{
	int X,N;
	printf("Digite o numero:");
	scanf("%i",&N);
	if (N<0)
	{X=(N*-1);}
	else
	{X=N;}
	printf("O valor do numero eh:%i",X);
	
	getch();
	
	return 0;
}
