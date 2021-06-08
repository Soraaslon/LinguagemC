#include<stdio.h>
#include<conio.h>
int main ()
{
float x1, x2, y, cont;
x1= 0;
x2= 1;
y= 1;
do
{
printf ("\n %f", y);
y = x1 + x2 ;
x1 = x2;
x2 = y ;
cont = cont + 1 ;
}
while (cont <= 15) ;
getch ();
}

