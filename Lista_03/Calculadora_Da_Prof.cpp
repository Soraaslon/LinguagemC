#include<conio.h>
#include<stdio.h>
int main ()
{
float a , b;
char S, R;
printf ("Digite um operador (+,-,*,/), ou aperte S para fechar o programa.");
scanf ("%c", & S);
if (R == '-')
printf ("\ndigite um numero:");
scanf ("%f", & a) ;
printf ("\ndigite outro numero:");
scanf ("%f", & b);
a = a - b ;
printf ("= %f", a);
{
if (R == '+')
printf ("\ndigite um numero:");
scanf ("%f", & a) ;
printf ("\ndigite outro numero:");
scanf ("%f", & b);
a = a + b;
printf ("= %f", a);
}
if (R == '*')
printf ("\ndigite um numero:");
scanf ("%f", & a);
printf ("\ndigite outro numero:");
scanf ("%f", & b);
a = a * b ;
printf ("= %f", a);
{
if (R == '/')
printf ("\ndigite um numero:");
scanf ("%f", & a) ;
printf ("\ndigite outro numero:");
scanf ("%f", & b);
a = a / b;
printf ("= %f", a);
}
if ( R == 'S')
printf ("calculadora encerrada.");
getch () ; 
}

