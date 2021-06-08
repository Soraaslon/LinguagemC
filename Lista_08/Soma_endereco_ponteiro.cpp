#include<stdio.h>

int main(){
int x, *px;
char nome, *pnome;
float y, *py;
px=&x;
px = 1500 + 4;
printf("%i",*px);
pnome=&nome;
pnome = 1520 + 8;
printf("%c",*pnome);
py=&py;
py = 1540 - 2;
printf("%f",*px);

return 0;
}
