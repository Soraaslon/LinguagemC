#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[30],b[30],i,x;
	printf("Digite os valores de A:\n");
	for(i=0;i<30;i++){
		scanf("%i",&a[i]);
		b[i]=pow(a[i],3);
		printf("B:%i\n",b[i]);}
		printf("Digite o valor a ser pesquisado:");
		scanf("%i",&x);
		for(i=0;i<30;i++){
			if(b[i]==x){
				printf("Valor %i encontrado na posicao %i (de 0 a 30)\n",b[i],i);
			}
		}
	getch();
	return 0;
}
