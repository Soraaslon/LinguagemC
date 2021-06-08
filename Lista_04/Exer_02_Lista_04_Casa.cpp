#include<stdio.h>
#include<conio.h>

int main()
{
	int a[9],g,x[9];
 
	printf ("Digite nove digitos:\n");
    printf("RA:\n");	
    for(g=1;g<=9;g++){
	scanf("%i",&a[g]);}
	for(g=1;g<=9;g++){
		x[g]=a[g];}
		
	printf("Novo RA:\n");
	for(g=1;g<=5;g++){
	printf("%i",x[g]);}
	for(g=9;g>=6;g--){
	printf("%i",x[g]);}			
		
	getch();
	return 0;
}
