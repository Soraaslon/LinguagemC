#include<conio.h>
#include<stdio.h>

int main()
{
	int N1,N2,N3,N4;
	printf("Digite quatro numeros inteiros:");
	scanf("%i %i %i %i",&N1,&N2,&N3,&N4);
	if (((N1%2==0)&&(N1%3==0))||((N2%2==0)&&(N2%3==0))||((N3%2==0)&&(N3%3==0))||((N4%2==0)&&(N4%3==0))){
	if ((N1%2==0)&&(N1%3==0))
    printf("Numero divisivel por 2 e 3:%i ",N1);
    if ((N2%2==0)&&(N2%3==0))
    printf("Numero divisivel por 2 e 3:%i ",N2);
    if ((N3%2==0)&&(N3%3==0))
    printf("Numero divisivel por 2 e 3:%i ",N3);
    if ((N4%2==0)&&(N4%3==0))
    printf("Numero divisivel por 2 e 3:%i ",N4);
	}
	else
	printf("Numero nao eh divisivel por 2 e 3");
	
	getch();
	
	return 0;
}
