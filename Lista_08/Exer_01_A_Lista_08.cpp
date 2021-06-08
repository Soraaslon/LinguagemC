#include<conio.h>
#include<stdio.h>
#include<string.h> 

int cad();
int pes();
int clas();
int alt();
int del();
int ent();
    char x[60];
    int g,h,i=0;
    float sal;
	struct cadas {
        char nome [60];
		char ender[60];
        char email[80];
		char tel[15];
    };
    struct cadas j[5];
int main ()
{
	
	while(i!=6){
    ent();
    switch (i){
    case 1: cad();break;  //Cadastro - 5 pessoas, nome, endereço, email, telefone//

    case 2: pes();break;  //Pesquisa - dos nomes//
    
    case 3: clas();break; //Classificacao Alfabetica
    		
	case 4: alt();break;  //Alteracao de registro
	
	case 5: del();break;  //Remoção
	
	}}
    getch();
return 0;
}

//QUANTO CODIGO QUE TEMMM, MEU DEUSS !
int ent(){
	printf("\t-= Menu =-\t\n1. Cadastro e Registro\n2. Pesquisa de Registro\n3. Classificacao Alfabetica\n4. Alteracao de Registro\n5. Remocao\n6. Sair\n");
    printf(" - Opcao: ");
    scanf("%i",&i);
    fflush (stdin);
}

int cad(){
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
	printf("- Email: \n");
	fgets(j[g].email,80,stdin);
	fflush (stdin);
	printf("- telefone: \n");
    fgets(j[g].tel,15,stdin);
	fflush (stdin);}}

int pes(){
	char pesq[60];
	printf("Digite o nome que deseja procurar:\n");
    fgets(pesq,60,stdin);
    for(g=0;g<=4;g++){
    if (strcmp(pesq,j[g].nome)==0){
    printf(" - achei!\n");
    printf(" - Cadastro %i - \n",g+1);
    printf("-Nome: %s",j[g].nome);
	printf("-Endereco: %s",j[g].ender);
	printf("-Email: %s",j[g].email);
	printf("-Telefone: %s\n",j[g].tel);}}}
	
int clas(){
	printf(" -=Classficacao Alfabetica=-\n");
    for(g=0;g<=3;g++){
			for(h=g+1;h<=4;h++){
			if(strcmp(j[g].nome,j[h].nome)>0){
			strcpy(x,j[g].nome);
			strcpy(j[g].nome,j[h].nome);
			strcpy(j[h].nome,x);
			}}}
			for(g=0;g<=4;g++){
				printf("Nome: %i ---> %s",g+1,j[g].nome);}}

int alt(){
	char pesq[60];
	printf("Digite o nome do cadastro que quer alterar:\n");
    fgets(pesq,60,stdin);
    for(g=0;g<=4;g++){
    if (strcmp(pesq,j[g].nome)==0){
    printf(" - Cadastro %i -\n ",g+1);
    printf("-Nome: %s\n",j[g].nome);
	printf("-Endereco: %s\n",j[g].ender);
	printf("-Email: %s\n",j[g].email);
	printf("-Telefone: %s\n",j[g].tel);
	printf("==========================\n");
	printf("-Digite o novo nome: \n");
	fgets(j[g].nome,60,stdin);
	fflush (stdin);
	printf("-Digite o novo endereco: \n");
	fgets(j[g].ender,60,stdin);
	fflush (stdin);
	printf("-Digite o novo email: \n");
	fgets(j[g].email,80,stdin);
	fflush (stdin);
	printf("-Digite o novo telefone:\n");
	fgets(j[g].tel,15,stdin);
	fflush (stdin);
	printf("\t -= Pronto seu recadastro foi concluido com sucesso =-\t\n");
	}}}
	
int del(){
	char pesq[60];
	printf("Digite o nome do cadastro que quer apagar:\n");
    fgets(pesq,60,stdin);
    for(g=0;g<=4;g++){
	if(strcmp(pesq,j[g].nome)==0){
		printf(" - Cadastro %i -\n ",g+1);
    printf("-Nome: %s\n",j[g].nome);
	printf("-Endereco: %s\n",j[g].ender);
	printf("-Email: %s\n",j[g].email);
	printf("-Telefone: %s\n",j[g].tel);
	printf(" - Aperte Enter em todos os campos que deseja apagar\n");
	printf("-nome: \n");
	fgets(j[g].nome,60,stdin);
	fflush (stdin);
	printf("-endereco: \n");
	fgets(j[g].ender,60,stdin);
	fflush (stdin);
	printf("-email: \n");
	fgets(j[g].email,80,stdin);
	fflush (stdin);
	printf("-telefone:\n");
	fgets(j[g].tel,15,stdin);
	fflush (stdin);
	printf("\t -= O cadastro foi apagado =-\t\n");
	}}}

