#include<stdio.h>
#include<conio.h>

int main()
{
	int N1,N2,N3,N4,N5;
	
	printf("Entre com os numeros:");
	scanf("%i %i %i %i %i",&N1,&N2,&N3,&N4,&N5);
	if ((N1<N2)&&(N1<N3)&&(N1<N4)&&(N1<N5))
	printf("O menor numero eh:%i ",N1);
	if ((N2<N1)&&(N2<N3)&&(N2<N4)&&(N2<N5))
	printf("O menor numero eh:%i ",N2);
	if ((N3<N2)&&(N3<N1)&&(N3<N4)&&(N3<N5))
	printf("O menor numero eh:%i ",N3);
	if ((N4<N2)&&(N4<N3)&&(N4<N1)&&(N4<N5))
	printf("O menor numero eh:%i ",N4);
	if ((N5<N2)&&(N5<N3)&&(N5<N4)&&(N5<N1))
	printf("O menor numero eh:%i ",N5);
	if ((N1>N2)&&(N1>N3)&&(N1>N4)&&(N1>N5))
	printf("O maior numero eh:%i ",N1);
	if ((N2>N1)&&(N2>N3)&&(N2>N4)&&(N2>N5))
	printf("O maior numero eh:%i ",N2);
	if ((N3>N2)&&(N3>N1)&&(N3>N4)&&(N3>N5))
	printf("O maior numero eh:%i ",N3);
	if ((N4>N2)&&(N4>N3)&&(N4>N1)&&(N4>N5))
	printf("O maior numero eh:%i ",N4);
	if ((N5>N2)&&(N5>N3)&&(N5>N4)&&(N5>N1))
	printf("O maior numero eh:%i ",N5);
    
	getch();
	
	return 0;
}
