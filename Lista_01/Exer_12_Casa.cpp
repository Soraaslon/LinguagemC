#include<conio.h>
#include<stdio.h>

int main()
{
	float Si,Sf,Ti,Tf,Vm,De,Dt;
	printf("Digite o espaco inicial do corpo:");
	scanf("%f",&Si);
	printf("Digite o espaco final do corpo:");
	scanf("%f",&Sf);
	printf("Digite o tempo inicial do corpo:");
	scanf("%f",&Ti);
	printf("Digite o tempo final do corpo:");
	scanf("%f",&Tf);
	Dt=Tf-Ti;
	De=Sf-Si;
	Vm=De/Dt;
	printf("A velocidade media eh:%.4f",Vm);
	
	getch();
	
	return 0;
}
