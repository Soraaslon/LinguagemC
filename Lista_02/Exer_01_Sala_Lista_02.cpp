#include<stdio.h>
#include<conio.h>

int main()
{
    float N1,N2,N3,M;
    printf("Digite as notas da prova:");
    scanf("%f%f%f",&N1,&N2,&N3);
    M=(N1+N2+N3)/3;
    if(M>=6.0)
    printf("Aprovado: %.1f",M);
    else
    printf("Reprovado: %.1f",M);
    
    getch();
    
    return 0;
}