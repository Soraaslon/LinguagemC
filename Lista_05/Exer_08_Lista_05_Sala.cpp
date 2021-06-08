#include<stdio.h>
#include<conio.h>

int main()
{
	int a[40],c,e,g,p;
	printf("Digite as notas dos alunos(em numeros inteiros):\n");	
	for(c=0;c<40;c++){
    scanf("%i",&a[c]);}
	    for(c=0;c<39;c++){
			for(e=c+1;e<40;e++){
				if(a[e]<a[c]){
					g=a[e];
					a[e]=a[c];
					a[c]=g;}}}
				printf("As notas sao:\n");
				for(c=0;c<40;c++){
				printf("%i\n",a[c]);
				}
				printf("Digite o valor a ser procurado:\n");
				scanf("%i",&p);
				for(c=0;c<40;c++){
					if(p==a[c]){
					printf("Valor %i encontrado na posicao %i(De 0 a 40)\n",a[c],c);}}

					
	getch();
	return 0;
}
