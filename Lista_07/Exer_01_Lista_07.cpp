#include<conio.h>
#include<stdio.h>
#include<string.h> 

int main ()
{
	char x[60],pesq[15];
    int g,h,i=0;
    float sal;
	struct cadas {
        char nome [60];
		char ender[60];
        int idade;
		char tel[15];
    };
    struct cadas j[5];
	while(i!=5){
    printf("\t-= Menu =-\t\n1. Cadastro e Registro\n2. Pesquisa de Registro\n3. Classificacao Alfabetica\n4. Alteracao de Registro\n5. Sair\n");
    printf(" - Opcao: ");
    scanf("%i",&i);
    fflush (stdin);
    
    switch (i){
    case 1:    //Cadastro//
	printf("\t- Digite As informacoes pedidas a seguir -\n");
	for(g=0;g<=4;g++){
    fflush(stdin);
    printf(" - Cadastro %i\t\n",g+1);
    fflush (stdin);
    printf("- Nome: \n");
	fgets(j[g].nome,60,stdin);
	fflush (stdin);
    printf("- Endereco: \n");
    fgets(j[g].ender,60,stdin);
    fflush (stdin);
	printf("- Idade: \n");
	scanf("%d",&j[g].idade);
	fflush (stdin);
	printf("- telefone: \n");
    fgets(j[g].tel,15,stdin);
	fflush (stdin);}break;


    case 2:    //Pesquisa//
	printf("Digite o nome que deseja procurar:\n");
    fgets(pesq,60,stdin);
    for(g=0;g<=4;g++){
    if (strcmp(pesq,j[g].nome)==0){
    printf(" - achei!\n");
    printf(" - Cadastro %i - \n",g);
    printf("-Nome: %s",j[g].nome);
	printf("-Endereco: %s",j[g].ender);
	printf("-Idade: %i\n",j[g].idade);
	printf("-Telefone: %s\n",j[g].tel);}
	}break;
    
    case 3:   //Classificacao Alfabetica
    printf(" -=Classficacao Alfabetica=-\n");
    for(g=0;g<=3;g++){
			for(h=g+1;h<=4;h++){
			if(strcmp(j[g].nome,j[h].nome)>0){
			strcpy(x,j[g].nome);
			strcpy(j[g].nome,j[h].nome);
			strcpy(j[h].nome,x);
			}}}
			for(g=0;g<=4;g++){
				printf("Nome: %i ---> %s",g+1,j[g].nome);
			}break;
			
	case 4:   //Alteracao de registro
	printf("Digite o nome do cadastro que quer alterar:\n");
    fgets(pesq,60,stdin);
    for(g=0;g<=4;g++){
    if (strcmp(pesq,j[g].nome)==0){
    printf(" - Cadastro %i -\n ",g+1);
    printf("-Nome: %s\n",j[g].nome);
	printf("-Endereco: %s\n",j[g].ender);
	printf("-Idade: %i\n",j[g].idade);
	printf("-Telefone: %s\n",j[g].tel);
	printf("==========================\n");
	printf("-Digite o novo nome: \n");
	fgets(j[g].nome,60,stdin);
	fflush (stdin);
	printf("-Digite o novo endereco: \n");
	fgets(j[g].ender,60,stdin);
	fflush (stdin);
	printf("-Digite a nova idade: \n");
	scanf("%i",&j[g].idade);
	fflush (stdin);
	printf("-Digite o novo telefone:\n");
	fgets(j[g].tel,15,stdin);
	fflush (stdin);
	printf("\t -= Pronto seu recadastro foi concluido com sucesso =-\t\n");
	}}break;
	
	}}
    getch();
return 0;
}
