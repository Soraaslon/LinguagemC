#include<stdio.h>
#include<conio.h>

int entA();
int entB();
int jun(int *pja, int *pfiz);
int exib(int *pisso);
int i,*pja,*pfiz,*pisso;

int main()
{
    entA();
    entB();
    jun(pja,pfiz);
    exib(pisso);
    
	getch();
	return 0;
}

int entA()
{
	int ja[3];
	printf(" - Digite os valores da matriz A:\n");
	for(i=0;i<=2;i++){
	scanf("%i",&ja[i]);}
	pja=ja;
	return 0;
}

int entB()
{
	int fiz[3];
	printf(" - Digite os valores da matriz B:\n");
	for(i=0;i<=2;i++){
	scanf("%i",&fiz[i]);}
	pfiz=fiz;
	return 0;
}

int jun(int *pja, int *pfiz)
{
	int isso[6];
	for(i=0;i<=2;i++){
		isso[i]=pja[i];}
		pisso=isso;
		for(i=0;i<=2;i++){
		isso[i+3]=pfiz[i];}
		pisso=isso;
		return 0;
}

int exib(int *pisso)
{
	for(i=0;i<=5;i++){
	printf("C: %i - ",*pisso);
}}

