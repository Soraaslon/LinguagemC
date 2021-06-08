#include<stdio.h>
#include<conio.h>

int main()
{
	int A[8],B[8],c,e,g,ac=0,pes;
	printf("Digite os valores de A:\n");	
	for(c=0;c<=7;c++){
    scanf("%i",&A[c]);
	B[c]=A[c]*5;
	printf("B:%i\n",B[c]);}
	printf("O vetor B eh:\n");
	    for(c=0;c<=6;c++){
			for(e=c+1;e<=7;e++){
				if(B[e]<B[c]){
					g=B[e];
					B[e]=B[c];
					B[c]=g;}}}
				for(e=0;e<=7;e++){
					printf("%i\n",B[e]);}
				printf("Digite o valor a ser procurado:");
				scanf("%i",&pes);
				for(c=0;c<=7;c++){
					if(pes==B[c]){
					printf("Valor %i encontrado na posicao %i(De 0 a 7)\n",B[c],c);}}

					
	getch();
	return 0;
}
