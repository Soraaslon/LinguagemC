#include<stdio.h>
#include<conio.h>

int main()
{
	float N1,N2,M,E,NM;
	printf("Digite o valor da nota 1:");
	scanf("%f",&N1);
	printf("Digite o valor da nota 2:");
	scanf("%f",&N2);
	M=(N1+N2)/2;
	if (M>=6.0)
	printf("O Aluno foi aprovado com media:%.2f",M);
	else {
	printf("Digite a nota do exame:");
	scanf("%f",&E);
	NM=(M+E)/2;
	if(NM>=5.0)
	printf("O Aluno foi aprovado em exame com media:%.2f",NM);
	else
	printf("O Aluno foi reprovado com media:%.2f",NM);
    }
	getch();
	
	return 0;    
}
