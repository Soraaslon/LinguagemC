#include<stdio.h>
int troca (int *a, int *b);
int main()
{
int vetor[10], i, j; char tecla;
/*  entrada  de dados */
for (i=0;i<=9;i++)
{ printf (" Entre o %2d. elemento: ", i+1);
  fflush(stdin); scanf("%d", &vetor[i]);
}
/* ordenacao do vetor */
for (i=0;i<=8;i++)
	for(j=i+1;j<=9;j++)
		troca(&vetor[i], &vetor[j]);
/* apresentacao do vetor ordenado */
for (i=0;i<=9;i++)
	printf(" Agora o %2d. elemento e': %5d\n", i+1, vetor[i]);
	printf("Tecle <enter> Para finalizar:");
	fflush(stdin); while((tecla == getchar()) != '\r')
	return(0);
}
int troca  (int *a, int *b)
/* definicao dos ponteiros que receberao os valores dos vetores */
{
int x;
if (*a > *b)
	{ 
	x = *a;
	*a = *b;
	*b = x;
	}
return(0);
}

