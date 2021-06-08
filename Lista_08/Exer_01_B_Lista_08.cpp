#include<conio.h>
#include<stdio.h>
#include<string.h>

//variaveis globais (°J°)
int i,g,h;
//struct
struct bata {
	char nome[60];
	float nota;
};
struct bata ta[20];
//sub-rotinas (Declarando)
int ent();
int cad();
int clas();
int alt();
int pes();
int listA();
int listR();
//principal
int main()
{
	while(i!=7){
	ent();
	switch(i){
	case 1: cad();break;
	case 2: clas();break;
	case 3: alt();break;
	case 4: pes();break;
	case 5: listA();break;
	case 6: listR();break;
}}
getch();
return 0;
}
//sub-rotinas
int ent(){
	printf("\t- Menu -\n-1.Cadastro Dos Alunos\n-2.Classificacao Dos Alunos\n-3.Alteracao De Nota\n-4.Pesquisa\n-5.Aprovados\n-6.Reprovados\n-7.Sair\n");
	printf("\n Digite a Opcao Desejada:\n");
	scanf("%i",&i);
	fflush(stdin);
}

int cad(){
	printf("\- Digite As informacoes pedidas a seguir -\n");
	for(g=0;g<=19;g++){
		printf(" - Cadastro %i\n",g+1);
		printf("-Nome:\n");
		fgets(ta[g].nome,60,stdin);
		printf("-Nota:\n");
		scanf("%f",&ta[g].nota);
		fflush(stdin);
}}

int clas(){
	float x;
	char y[60];
	printf("\t - Classificacao das maiores notas - \n");
	for(g=0;g<=18;g++){
		for(h=g+1;h<=19;h++){
			if(ta[g].nota<ta[h].nota){
			x=ta[g].nota;
			ta[g].nota=ta[h].nota;
			ta[h].nota=x; //classificou a nota, agora vai classificar os nomes pra fazer sentido :D
			strcpy(y,ta[g].nome);
			strcpy(ta[g].nome,ta[h].nome);
			strcpy(ta[h].nome,y);
}}}
for(g=0;g<=19;g++){
	printf("%i-Nome: %s -Nota: %2.2f\n",g+1,ta[g].nome,ta[g].nota);
}}

int alt(){
	char y[60];
    printf(" - Digite o Nome do Aluno Que Procura:\n");
    fgets(y,60,stdin);
    for(g=0;g<=19;g++){
    if(strcmp(y,ta[g].nome)==0){
    	printf("\t- Cadastro %i -\n",g+1);
    	printf("-Nome: %s\n",ta[g].nome);
    	printf("-Nota: %2.2f\n",ta[g].nota);
		printf("\n\t - Novo Cadastro - \n");
		printf("-Nome: \n");
		fgets(ta[g].nome,60,stdin);
    	printf("-Nota: \n");
		scanf("%f",&ta[g].nota);
		fflush(stdin);}}}

int pes(){
	char y[60];
    printf(" - Digite o Nome do Aluno Que Procura:\n");
    fgets(y,60,stdin);
    for(g=0;g<=19;g++){
    if(strcmp(y,ta[g].nome)==0){
    	printf(" - Achei\n");
    	printf("\t- Cadastro %i -\n",g+1);
    	printf("-Nome: %s\n",ta[g].nome);
    	printf("-Nota: %2.2f\n",ta[g].nota);}}}

int listA(){
	printf("\t-Alunos Aprovados (Nota Acima ou igual a 7)\n");
	for(g=0;g<=19;g++){
		if(ta[g].nota>=7){
			printf("- %s\n",ta[g].nome);

}}}

int listR(){
	printf("\t-Alunos Reprovados (Nota Abaixo a 7)\n");
	for(g=0;g<=19;g++){
		if(ta[g].nota<7){
			printf("- %s\n",ta[g].nome);

}}}

