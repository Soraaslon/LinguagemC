#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7],b[7],c[7][2],i,j;
	printf("Digite os valores de A:");
	for(i=0;i<7;i++){
		scanf("%i",&a[i]);}
	printf("Digite os valores de B:");
	for(i=0;i<7;i++){
		scanf("%i",&b[i]);}
		for(i=0;i<7;i++){
			for(j=0;j<1;j++){
				c[i][j]=a[i];}}
				for(i=0;i<7;i++){
			for(j=1;j<2;j++){
				c[i][j]=b[i];}}
				for(i=0;i<7;i++){
			for(j=0;j<2;j++){
				printf("C:%i\n",c[i][j]);}}
				getch();
				return 0;
	}

