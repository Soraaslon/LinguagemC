#include<conio.h>
#include<stdio.h>

int main ()
{
	float A,B,C;
	printf("Digite tres numeros:");
	scanf("%f %f %f",&A,&B,&C);
	if ((A<B)&&(B<C))
	printf ("Os Valores em ordem crescente sao: %f %f %f",A,B,C);
	if ((A<C)&&(C<B))
	printf ("Os Valores em ordem crescente sao: %f %f %f",A,C,B);
	if ((C<B)&&(B<A))
	printf ("Os Valores em ordem crescente sao: %f %f %f",C,B,A);
	if ((C<A)&&(A<B))
	printf ("Os Valores em ordem crescente sao: %f %f %f",C,A,B);
	if ((B<A)&&(A<C))
	printf ("Os Valores em ordem crescente sao: %f %f %f",B,A,C);
	if ((B<C)&&(C<A))
	printf ("Os Valores em ordem crescente sao: %f %f %f",B,C,A);
	if((B==A)&&(A==C))
	printf ("Os numeros tem o mesmo valor.");
	getch();
	return 0;
}
