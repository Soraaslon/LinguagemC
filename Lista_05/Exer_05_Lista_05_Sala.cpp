#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20],b[30],c[50],i,f,x;
	printf("Digite os valores de A:\n");
	for(i=0;i<20;i++){
		scanf("%i",&a[i]);}
	printf("Digite os valores de B:\n");
	for(i=0;i<30;i++){
		scanf("%i",&b[i]);}
	for(i=0;i<20;i++){
		c[i]=a[i];}
		for(i=0;i<30;i++){
		c[i+20]=b[i];}
		for(i=0;i<49;i++){
			for(f=i+1;f<50;f++){
				if(c[f]>c[i]){
				x=c[f];
				c[f]=c[i];
				c[i]=x;}}}
			printf("C eh igual ah:\n");
			for(i=0;i<50;i++){
				printf("%i\n",c[i]);
			}
	getch();
	return 0;
}
