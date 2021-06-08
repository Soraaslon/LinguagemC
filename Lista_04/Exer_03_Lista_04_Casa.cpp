#include<conio.h>
#include<stdio.h>

int main()
{
	int a[9],f,x[9];
 
	printf ("Difite nove digitos:\n");
    printf("RA:\n");	
    for(f=1;f<=9;f++){
	scanf("%i",&a[f]);}
	for(f=1;f<=9;f++){
		x[f]=a[f];
	}
	x[1]=a[2];
	x[2]=a[1];
	x[9]=a[8];
	x[8]=a[9];	
	printf("Novo RA:\n");
	for(f=1;f<=9;f++){
	printf("%i",x[f]);}		
		
	getch();
	return 0;
}
