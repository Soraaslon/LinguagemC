#include<stdio.h>
#include<conio.h>

int main()
{
	float N,R;
	printf("Digite a nota da media:");
	scanf("%f",&N);
	R=((int)(N*100))%100;
	if (R>50){
	N=((N-(R/100))+1);
	printf("A Nota arredonda eh:%f",N);
	}
	else
	{N=(N-(R/100));
	printf("A Nota arredondada eh:%f",N);}
	
	getch();
	
	return 0;
}
