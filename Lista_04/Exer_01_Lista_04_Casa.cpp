#include<stdio.h>
#include<conio.h>

int main()
{
	int a[9],g,x[9];
 
	printf ("Digite nove digitos:\n");
    printf("RAV:\n");	
    for(g=1;g<=9;g++){
	scanf("%i",&a[g]);}
	for(g=1;g<=9;g++){
		x[g]=a[g];}
		x[3]= a[8];
		x[4]=a[7];
		x[7]=a[3];
		x[8]=a[4];
	printf("RAC:\n");
	for(g=1;g<=9;g++){
	printf("%i",x[g]);}		
		
	getch();
	return 0;
}
