#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4],b[4],c[4][2],i,j;
	printf("Digite os valores de A:");
	for(i=0;i<4;i++){
		scanf("%i",&a[i]);}
	printf("Digite os valores de B:");
	for(i=0;i<4;i++){
		scanf("%i",&b[i]);}
		for(i=0;i<4;i++){
			for(j=0;j<1;j++){
				c[i][j]=a[i]*2;}}
				for(i=0;i<4;i++){
				c[i][1]=b[i]-5;}
				for(i=0;i<4;i++){
			for(j=0;j<2;j++){
				printf("C:%i\n",c[i][j]);}}
				getch();
				return 0;
}

