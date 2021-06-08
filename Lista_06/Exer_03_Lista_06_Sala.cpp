#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10],b[10][3],i,j,g,h;
	printf("Digite os valores de A:\n");
	for(i=0;i<10;i++){
		scanf("%i",&a[i]);}
		printf("C:\n");
		printf("\nColuna 1:\n");
		for(i=0;i<10;i++){
				b[i][0]=a[i]+5;
				printf("%i - ",b[i][0]);}
				printf("\nColuna 2:\n");
			for(i=0;i<10;i++){
				for(j=1;j<2;j++){
						b[i][j]=1;
						for(g=a[i];g>1;g--){
						b[i][j]=g*b[i][j];}
						printf("%i - ",b[i][1]);}}
				printf("\nColuna 3:\n");
				for(i=0;i<10;i++){
					for(j=2;j<3;j++){
						b[i][j]=pow(a[i],2);
					printf("%i - ",b[i][j]);}}
		
	getch();
	return 0;
}
