#include<stdio.h>
#include<conio.h>

int main()
{
	int N;
	float Q;
	printf("Digite um numero inteiro:");
	scanf("%d",&N);
	Q=N*N;
	printf("O quadrado deste numero eh: %.2f", Q);
	
	getch();
	
	return 0;
	
}
