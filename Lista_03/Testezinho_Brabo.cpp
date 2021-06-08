#include<stdio.h>
#include<conio.h>
int main ()
{
int n;
printf ("digite um numero menor ou igual a 50:\n");
scanf ("%d,",&n);
do
{
printf ("\n %d", n);
n = n * 3;
}
while (n < 250);
getch ();
}
