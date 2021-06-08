#include<stdio.h>
#include<conio.h>

int A(int *a);
int B(int *bx);
int C(int *ax,int *b);
int i,h;

int main()
{
	int a[12],b[12];
	A(a);
	B(b);
	C(a,b);
	
	getch();
	return 0;
}

int A(int *a){
	int x;
	printf(" - Digite os valores de A: \n");
	for(i=0;i<=11;i++){
		scanf("%i",&a[i]);}
	for(i=0;i<=10;i++){
		for(h=i+1;h<=11;h++){
			if(a[h]<a[i]){
		x=a[i];
		a[i]=a[h];
		a[h]=x;}}}
}

int B(int *bx){
	int x;
	printf(" - Digite os valores de B: \n");
	for(i=0;i<=11;i++){
		scanf("%i",&bx[i]);}
	for(i=0;i<=10;i++){
		for(h=i+1;h<=11;h++){
			if(bx[h]<bx[i]){
		x=bx[i];
		bx[i]=bx[h];
		bx[h]=x;}}}
}

int C(int *a,int *bx){
	int x,c[12];
	for(i=0;i<=11;i++){
		c[i]=a[i]+bx[i];}
	for(i=0;i<=10;i++){
		for(h=i+1;h<=11;h++){
			if(c[h]<c[i]){
		x=c[i];
		c[i]=c[h];
		c[h]=x;}}}
		printf(" - Os valores de C sao: \n");
		for(i=0;i<=11;i++){
        printf("%i\n",c[i]);}
        
		return 0;
}


