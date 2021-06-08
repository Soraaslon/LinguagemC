#include<stdio.h>
#include<conio.h>

int main()
{
	float SB,SL,H,A;
	printf("Digite o Salario Bruto:");
	scanf("%f",&SB);
	printf("Digite a quantidade de horas trabalhadas:");
	scanf("%f",&H);
	if (H>160){
	H=(H-160);
	A=((SB/160)+(H*0.50));
	SB=(A+SB);	
	}
	if (SB<800){
	SL=SB;
	printf("O Salario Liquido eh:%f",SL);
    }
    else{
    if ((SB>=800)&&(SB<=1600)){
    SL=(SB-(SB*0.13));
	printf("O Salario Liquido eh:%f",SL);	
	}
	else{
	SL=(SB-(SB*0.22));
	printf("O Salario Liquido eh:%f",SL);
}
}
    getch();
    
    return 0;
}
