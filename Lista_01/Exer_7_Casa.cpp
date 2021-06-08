#include<conio.h>
#include<stdio.h>

int main()
{
	float V,A,R;
	printf("Digite o raio da esfera:");
	scanf("%f",&R);
	V=(4/3)*3.1416*(R*R*R);
	A=4*3.1416*(R*R);
	printf("O Volume eh:%f e a area eh:%f",V,A);
	
	getch();
	
	return 0;
}
