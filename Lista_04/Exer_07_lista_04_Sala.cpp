#include<conio.h>
#include<stdio.h>

int main()
{
	int d[10],f[10],g;
	printf("Digite 10 valores para A:\n");
	for(g=1;g<=10;g++){
	scanf("%i",&d[g]);}
    for(g=1;g<=10;g++){
	f[g]=d[g];}
	printf("Os valores de B sao:\n");
    for(g=10;g>=1;g--){
	printf("%i\n",f[g]);}
	getch();
	return 0;
}
