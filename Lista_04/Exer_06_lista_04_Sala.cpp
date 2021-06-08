#include<conio.h>
#include<stdio.h>

int main()
{
	int a[8],b[8],z;
	printf("Digite 8 Valores para A:\n");
	for(z=1;z<=8;z++){
		scanf("%i",&a[z]);
		b[z]=a[z]*a[z];}
	printf("Os Valores De B sao:\n");
	for(z=1;z<=8;z++){
		printf("%i\n",b[z]);}
		getch();
		return 0;
}
