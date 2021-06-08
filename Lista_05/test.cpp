#include<stdio.h>
#include<conio.h>

int main()
{
	int A[8],B[8],c,d,e,g;
	printf("Digite os valores de A:\n");	
	for(c=0,d=0;c<=7,d<=7;c++,d++){
    scanf("%i",&A[c]);
	B[d]=A[c]*5;
	printf("B:%i\n",B[d]);}
	printf("O vetor B eh:\n");
	    for(d=0;d<=6;d++){
			for(e=d+1;e<=7;e++){
				if(B[e]<B[d]){
					g=B[e];
					B[e]=B[d];
					B[d]=g;}}}
				for(e=0;e<=7;e++){
					printf("%i\n",B[e]);}
				
	getch();
	return 0;
}
