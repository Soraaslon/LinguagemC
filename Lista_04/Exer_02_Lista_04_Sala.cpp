#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6],f,i,b[6];
    printf("Matriz A:\n");
	printf ("Digite seis valores positivo:\n");
	for(i=1;i<=6;i++){
	scanf("%i",&a[i]);}
	for(i=1;i<=6;i++){
    for(b[i]=1;a[i]>1;a[i]--){
	b[i]=a[i]*b[i];}
    printf("b:%i\n",b[i]);
}
	getch();
	return 0;
}
