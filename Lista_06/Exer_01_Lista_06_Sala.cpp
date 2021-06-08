#include<conio.h>
#include<stdio.h>

int main()
{
	int a[5][3],b[5][3],c[5][3],i,j,k;
	printf("Digite os valores de A:\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
	scanf("%i",&a[i][j]);}}
	printf("Digite os valores de B:\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
	scanf("%i",&b[i][j]);}}
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];}}
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("C:%i\n",c[i][j]);}}
		getch();
		return 0;
}
