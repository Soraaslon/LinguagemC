#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15],b[15],i,j,h,f,x;
	printf("Digite os valores de A:");
	for(i=0;i<=14;i++){
		scanf("%i",&a[i]);}
		for(i=0;i<=14;i++){
			for(j=a[i],b[i]=1;j>1;j--){
			b[i]=j*b[i];}}
			for(i=0;i<=13;i++){
		    for(j=i+1;j<=14;j++){
			if(b[i]>b[j]){
				x=b[j];
				b[j]=b[i];
				b[i]=x;}}}
				for(i=0;i<=14;i++){
				printf("%i\n",b[i]);}
    getch();
    return 0;
}

