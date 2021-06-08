#include<stdio.h>
#include<conio.h>

int entA(int *ja);
int entB(int*fiz);
int jun(int *ja, int *fiz,int*isso);
int exib(int *isso);
int i;

int main()
{
	int ja[30],fiz[30],isso[60];
    entA(ja);
    entB(fiz);
    jun(ja,fiz,isso);
    exib(isso);
    
	getch();
	return 0;
}

int entA(int *ja)
{
	printf(" - Digite os valores da matriz A:\n");
	for(i=0;i<30;i++){
	scanf("%i",&ja[i]);}
}

int entB(int *fiz)
{
	printf(" - Digite os valores da matriz B:\n");
	for(i=0;i<30;i++){
	scanf("%i",&fiz[i]);}
	return 0;
}

int jun(int *ja, int *fiz,int *isso)
{
	for(i=0;i<30;i++){
		isso[i]=ja[i];
		isso[i+30]=fiz[i];}
}

int exib(int *isso)
{
	for(i=0;i<60;i++){
	printf("C: %i - ",isso[i]);
}}

