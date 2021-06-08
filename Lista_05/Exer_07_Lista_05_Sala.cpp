#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20],b[20],c,d,e,f,ac=0;
	printf("Digite os valores de A:\n");
	for(c=0;c<20;c++){
	scanf("%i",&a[c]);
	b[c]=(a[c]+2);}
	printf("B eh:\n");
	for(c=0;c<19;c++){
		for(d=c+1;d<20;d++){
			if (b[d]<b[c]){
				e=b[d];
				b[d]=b[c];
				b[c]=e;}}}
		for(c=0;c<20;c++){
	printf("%i\n",b[c]);}
	printf("Digite o valor a ser procurado:");
				scanf("%i",&f);
				for(c=0;c<20;c++){
					if((f==b[c])&&(ac==0)){
					ac=1;
					printf("Valor %i encontrado na posicao %i(De 0 a 20)\n",b[c],c);}}
	getch();
	return 0;
}
