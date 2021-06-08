#include<conio.h>
#include<stdio.h>

int main()
{
	float N1,N2,D;
	printf("Digite os dois valores numericos:");
	scanf("%f %f",&N1,&N2);
	if (N1==N2){
	printf("Os dois valores sao iguais");}
	else{
	if (N1>N2)
	{D=N1-N2;
	printf("A diferenca eh:%f",D);}
	else {
    (N1<N2);
	D=N2-N1;
	printf("A diferenca eh:%f",D);}
    }
	getch ();
	
	return 0;
}
