#include<conio.h>
#include<stdio.h>

int main()
{
	float N1,N2,N3,N4,M;
	printf("Digite a nota do primeiro bimestre:");
	scanf("%f",&N1);
	printf("Digite a nota do segundo bimestre:");
	scanf("%f",&N2);
	printf("Digite a nota do terceiro bimestre:");
	scanf("%f",&N3);
	printf("Digite a nota do quarto bimestre:");
	scanf("%f",&N4);
	M=(N1+N2+N3+N4)/4;
	printf("A media final eh:%f",M);
	
	getch();
	
	return 0;
}
