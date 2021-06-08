#include<conio.h>
#include<stdio.h>

int main()
{
	int r,e,g,h;
	printf("Digite qualquer valor inteiro menor ou igual a 50:");
	scanf("%i",&e);
	r=e*3;
	g=e*3*3;
	h=e*3*3*3;
    if ((e<=50)&&(r<250)) {
    printf("%ix3=%i\n",e,r);
    if ((e<=50)&&(g<250)) {
    printf("%ix3x3=%i\n",e,g);}
	if ((e<=50)&&(h<250)) {
    printf("%ix3x3x3=%i\n",e,h);} 
}
    getch();
    return 0;
} 
