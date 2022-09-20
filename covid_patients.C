#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dadosPaciente
{
    char cpf[20];
    char nome[50];
    char sexo[1];
    int idade; 
};

int main(){
    setlocale(LC_ALL,"");
	
    FILE *inforPacientes;
    inforPacientes = fopen("DadosPaciente.txt", "a+");

	int pontos = 0, resposta;

    struct dadosPaciente dados;
    
    printf("Faça seu cadrastro!\n");
    printf("Digite seu CPF:\n");
    gets(dados.cpf);
    fflush(stdin);
    
    printf("Digite seu nome: \n");
    gets(dados.nome);
    fflush(stdin);

    printf("Digite seu sexo, 'M' para Masculino ou 'F' para Feminino:\n");
    gets(dados.sexo);
    fflush(stdin);
    
    printf("Digite sua idade: \n");
    scanf("%d", &dados.idade);
    fflush(stdin);

    fprintf(inforPacientes, "CPF: %s\n", dados.cpf);
    fprintf(inforPacientes, "Nome: %s\n", dados.nome);
    fprintf(inforPacientes, "Sexo: %s\n", dados.sexo);
    fprintf(inforPacientes,"Idade: %d\n", dados.idade);
    fprintf(inforPacientes, "__________________________________\n\n");
    fclose(inforPacientes);

    system("cls");
    

   
    printf("Irão ser feitas dez perguntas a seguir, que so poderão ser respondida com 1 para sim ou 0 para não.\n");
    printf("AS perguntas a seguir é para saber qual ala deve se dirigir-se.\n\n");
    do{
        printf("Tem Febre?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 5;
    }
    fflush(stdin);

    do{
        printf("Tem dor de cabeça?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 1;
    }
    fflush(stdin);

    do{
        printf("Tem secreção nasal ou espirros?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 1;
    }
    fflush(stdin);

    do{
        printf("Tem dor/irritação na garganta?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 1;
    }
    fflush(stdin);

    do{
        printf("Tem tosse seca?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 3;
    }
    fflush(stdin);
    do{
        printf("Tem dificuldade respiratória?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 10;
    }
    fflush(stdin);

    do{
        printf("Tem dores no corpo?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 1;
    }
    fflush(stdin);

    do{
        printf("Tem diarréia?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 1;
    }
    fflush(stdin);

    do{
        printf("Esteve em contato, nos Últimos 14 dias, com um caso diagnosticado com COVID-19?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){

        pontos = pontos + 10;
    }
    fflush(stdin);

    do{
        printf("Esteve em locais com grande aglomeração?\n");
        scanf("%d", &resposta);
    }while(resposta != 1 && resposta != 0);
    if(resposta == 1){
        pontos = pontos + 3;
    }
    fflush(stdin);

    system("cls");

    printf("Total de pontos: %d\n\n", pontos);

    if((pontos >= 0) && (pontos <= 9)){
        printf("Seu risco para COVID-19 é baixo, dirija-se a ala de risco baixo. Obrigado!\n");
    }else if((pontos >= 10) && (pontos <= 19)){
        printf("Seu risco para COVID-19 é mÃ©dio, dirija-se a ala de risco mÃ©dio. Obrigado!\n");
    }else if(pontos > 20){
        printf("Seu risco para COVID-19 é alto, dirija-se a ala de risco alto. Obrigado!\n");
    }

    return 0;
}
