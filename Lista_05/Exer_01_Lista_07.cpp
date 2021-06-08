#include<conio.h>
#include<stdio.h>
#include<string.h> 

int main ()
{
    struct cad {
    char nome [60];
    int idade;
    float salario;
    };
    struct cad x[5],aux;
    int i,j;
    float sal;
    //Cadastro//
    for(i=0;i<=4;i++){
    fflush(stdin);
    fgets(x[i].nome,60,stdin);
    scanf("%d",&x[i].idade);
    scanf("%f",&x[i].salario);}
return 0;
}
