#include<conio.h>
#include<stdio.h>

int main()
{
	int N1,N2,N3,N4;
	printf("Digite quatro numeros inteiros:");
	scanf("%i %i %i %i",&N1,&N2,&N3,&N4);
	if (((N1%4==0)||(N1%5==0))||((N2%4==0)||(N2%5==0))||((N3%4==0)||(N3%5==0))||((N4%4==0)||(N4%5==0))){
	if ((N1%4==0)||(N1%5==0))
    printf("Numero divisivel por 4 ou 5:%i ",N1);
    if ((N2%4==0)||(N2%5==0))
    printf("Numero divisivel por 4 ou 5:%i ",N2);
    if ((N3%4==0)||(N3%5==0))
    printf("Numero divisivel por 4 ou 5:%i ",N3);
    if ((N4%4==0)||(N4%5==0))
    printf("Numero divisivel por 4 ou 5:%i ",N4);
	}
	else
	printf("Numero nao eh divisivel por 4 ou 5");
	
	getch();
	
	return 0;
}
