#include<stdio.h>
#include<conio.h>

int somaant(int *pa);

int main()
{   
    
    int a,*pa;
    printf(" - Digite um numero e sera exibido a soma de seus antecessores - \n");
	scanf("%i",&a);
	somaant(&a);
	printf("-O resultado eh: %i",a);
	getch();
	return 0;
}

int somaant(int *pa)
{
	int b,i;
	i=*pa;
	for(b=0;i>0;i--){
		b=b+i;}
    *pa=b;
}	


