#include<stdio.h>
#include<conio.h>

int main()
{
	int D[12],e,f,g;
	
	printf("Digite 12 valores:\n");
	for(e=0;e<12;e++){
		scanf("%i",&D[e]);}
	for(e=0;e<11;e++){
		for(f=e+1;f<12;f++){
			if(D[f]>D[e]){
				g=D[f];
				D[f]=D[e];
				D[e]=g;}}}
				for(e=0;e<12;e++){
			printf("%i\t",D[e]);}
    getch();
	return 0;
}
