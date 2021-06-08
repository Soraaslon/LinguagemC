#include<conio.h>
#include<stdio.h>

int main()
{
	float R;
	int C;
	printf("Quantidade de coelhos:");
	scanf("%d",&C);
	R=(C*0.70)/18+10;
	printf("Com %d coelhos,o valor do custo sera de:%.2f",C ,R);
	
	getch();
	
	return 0;
}
