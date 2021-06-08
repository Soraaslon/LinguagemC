#include<stdio.h>
#include<conio.h>

int a[12],b[12],c[12],i,h;
int A();
int B();
int C(int a[12],int b[12]);

int main()
{
	A();
	B();
	C(a,b);
	
	getch();
	return 0;
}

int A(){
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
		return a[i];
}

int B(){
	int x;
	printf(" - Digite os valores de B: \n");
	for(i=0;i<=11;i++){
		scanf("%i",&b[i]);}
	for(i=0;i<=10;i++){
		for(h=i+1;h<=11;h++){
			if(b[h]<b[i]){
		x=b[i];
		b[i]=b[h];
		b[h]=x;}}}
		return b[i];
}

int C(int a[12],int b[12]){
	int x;
	for(i=0;i<=11;i++){
		c[i]=a[i]+b[i];}
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

