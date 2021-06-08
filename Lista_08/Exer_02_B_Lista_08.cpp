#include<stdio.h>
#include<conio.h>

int entA();
int entB();
int jun(int ja[30], int fiz[30]);
int exib(int isso[60]);
int ja[30],fiz[30],isso[60],antes,i;

int main()
{
    entA();
    entB();
    jun(ja,fiz);
    exib(isso);
    
	getch();
	return 0;
}

int entA()
{
	printf(" - Digite os valores da matriz A:\n");
	for(i=0;i<=29;i++){
	scanf("%i",&ja[i]);}
	return 0;
}

int entB()
{
	printf(" - Digite os valores da matriz B:\n");
	for(i=0;i<=29;i++){
	scanf("%i",&fiz[i]);}
	return 0;
}

int jun(int ja[30], int fiz[30])
{
	for(i=0;i<=29;i++){
		isso[i]=ja[i];}
		for(i=0;i<=29;i++){
		isso[i+30]=fiz[i];}
		return 0;
}

int exib(int isso[60])
{
	for(i=0;i<=59;i++){
	printf("C: %i - ",isso[i]);
}}

