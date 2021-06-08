#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
	float X1,X2,A,B,C,D;
	printf ("Digite os coeficiente da equacao:");
	scanf("%f %f %f",&A,&B,&C);
	if (A!=0){
	D=((B*B)-(4*A*C));
	if (D<0)
	printf("A equacao nao tem solucao.");
	else
	{
	X1=((-B+sqrt(D))/(2*A));
	X2=((-B-sqrt(D))/(2*A));
	printf("Os valores da equacao sao:%f e %f",X1,X2);
    }
    }
	getch();
	return 0;
}
