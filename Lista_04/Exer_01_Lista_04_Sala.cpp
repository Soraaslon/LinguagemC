#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],b[5],i;
    printf("Matriz A:\n");
	printf ("Digite cinco valores positivo:\n");
	for(i=1;i<=5;i++){
	scanf("%i",&a[i]);}
	printf("Matriz B:\n");
    for(i=1;i<=5;i++){
	b[i]=a[i]*3;
    printf("%i\n",b[i]);}

	getch();
	return 0;
}
