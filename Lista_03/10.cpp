#include<stdio.h>
#include<conio.h>
int main ()
{
int n, cont;
cont=0;
n=0;
while (cont<=500)
{
if (cont % 2 == 0)
n= cont + n;
printf ("\n%5.2d", n);
cont = cont + 1;
}
getch();
}
