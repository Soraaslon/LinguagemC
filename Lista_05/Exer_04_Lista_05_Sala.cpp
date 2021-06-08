#include<stdio.h>
#include<conio.h>

int main()
{
    int a[15],b[15],c[15],i,x,g;
    printf("Digite os valores de A:");
    for(i=0;i<15;i++){
    	scanf("%i",&a[i]);}
    for(i=0;i<14;i++){
	for(g=i+1;g<15;g++){
		if(a[g]<a[i]){
			x=a[g];
			a[g]=a[i];
			a[i]=x;}}
}
    printf("Digite os valores de B:");
	for(i=0;i<15;i++){
    	scanf("%i",&b[i]);}
    for(i=0;i<14;i++){
	for(g=i+1;g<15;g++){
		if(b[g]<b[i]){
			x=b[g];
			b[g]=b[i];
			b[i]=x;}}
}
    for(i=0;i<15;i++){
    	c[i]=a[i]+b[i];}
    for(i=0;i<14;i++){
	for(g=i+1;g<15;g++){
		if(c[g]<c[i]){
			x=c[g];
			c[g]=c[i];
			c[i]=x;}}
}
    printf("Os Valores de C sao:\n");
    for(i=0;i<15;i++){
    	printf("%i\n",c[i]);
}
    getch();
    return 0;
}





