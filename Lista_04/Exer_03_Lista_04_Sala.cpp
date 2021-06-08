#include<conio.h>
#include<stdio.h>

int main(){
	int a[5],b[5],c[5],i;
	i=1;
	printf("Digite Cinco Valores p/ A:\n");	
	while(i<=5){
	scanf("%i",&a[i]);
	i++;
	}
	printf("Digite cinco valores p/ B:\n");
	i=1;
	do{
	scanf("%i",&b[i]);
	i++;
	}
	while(i<=5);
	printf("Os Valores de C sao:\n");
	for(i=1;i<=5;i++){
		c[i]=(a[i]-b[i]);}
	for(i=1;i<=5;i++){	
		printf("\n%i",c[i]);}
	
    getch();
    return 0;
}
