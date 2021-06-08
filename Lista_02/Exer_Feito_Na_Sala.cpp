#include<conio.h>
#include<stdio.h>

int main()
{
    int A;
    printf("Entre com o numero do Anime:");
    scanf("%d",&A);
    switch(A){
        case 1:printf("Darling the Frax"); break;
        case 2:printf("Full Metal Alchemist"); break;
        case 3:printf("Nanatsu no Taizai"); break;
        case 4:printf("Fairy Tail"); break;
        case 5:printf("Naruto"); break;
        default:printf("Opcao Invalida");
}
    getch();
    
    return 0;
}
