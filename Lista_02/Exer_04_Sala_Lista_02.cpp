#include<conio.h>
#include<stdio.h>

int main ()
{
	float A,B,C;
	printf("digite os valores dos lados do triangulo:");
	scanf("%f %f %f",&A,&B,&C);
	if ((A<B+C)&&(B<A+C)&&(C<A+B)){
	if ((A==B)&&(A==C))
	printf("Eh um triangulo equilatero.");
	else{
	if ((A==B)||(A==C)||(B==C))
	printf("Eh um triangulo isosceles.");
	else 
	printf("Eh um trangulo escaleno.");
    }
    }
    else
    printf("Nao eh um triangulo.");
    
    getch();
    
    return 0;
}
