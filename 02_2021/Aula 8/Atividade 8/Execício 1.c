/* Crie um programa que contenha
	Um vetor de alunos de tamanho NUM;
	Uma função que cria um novo aluno, leia os seus dados e retorne o novo aluno;
	Uma função que receba um aluno por parâmetro e exiba seus dados;
	Uma função para buscar um aluno pelo número de RA e exibir seus dados, caso encontrado;
	Uma função para listar todos os alunos;
	Um menu com as seguintes opções
		Cadastrar novo aluno;
		Listar todos os alunos;
		Buscar aluno pelo RA;
		Sair*/
		
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
		
typedef struct{
	int ra;
	char nome[50];
	char curso[50];
	int anoInicio;
	int idade;
} Aluno;

void CriarAluno(Aluno *vet, int *reg);
void BuscarAluno(Aluno *vet, int x);
void ListaAlunos(Aluno *vet, int x);
int Menu();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ctr=1, reg=0, NUM;
	Aluno *registro;
	
	printf("\nInsira o tamanho do vetor de alunos: ");
	scanf("%d", &NUM);
	if (NUM<1){
		printf("\nInsira um valor válido.\n");
		system("pause");
		return 0;
	}
	registro = (Aluno *)malloc(NUM * sizeof(Aluno));
	system("pause");
	system("clr");	
	while (ctr!=0){
		ctr=Menu();
		switch(ctr){
			case 1:  // Cadastrar novo aluno
				CriarAluno(&registro[NUM], &reg);
				reg++;
				break;
			
			case 2: // Listar todos os alunos 
				ListaAlunos(&registro[NUM], reg);
				break;
			
			case 3: // Buscar aluno pelo RA
				BuscarAluno(&registro[NUM], reg);
				break;
			
			case 0: // Encerrar o programa
				printf("O programa será encerrado.\n");
				system("pause");
				return 0;
				break;
			
			default:
				printf("\nInsira um valor válido.\n");
				break;
		}
		system("pause");
		system("clr");
	}
	system("pause");
	return 0;
}

int Menu(){	//imprime o menu
	int aux;
	system("cls");
	printf("\n\tMENU DE OPERAÇÕES\n-----------------------------------\nCadastrar novo aluno \t(Digite 1)\nListar todos os alunos \t(Digite 2)\nBuscar aluno pelo RA \t(Digite 3)\nSair \t\t\t(Digite 0)\n-----------------------------------\n");
	printf("Insira sua escolha: ");
	scanf("%d", &aux);	//recebe a entrada do usuário (seleção)
	printf("\n");
	return aux;
}

void CriarAluno(Aluno *vet, int *reg){	//cria nova entrada para "aluno"
	printf("Insira o RA do Aluno: ");
	scanf("%d", &vet[*reg].ra);
	getchar();
	printf("Insira o Nome do Aluno: ");
	scanf(" %s", vet[*reg].nome);
	printf("Insira o Nome do Curso: ");
	scanf(" %s", vet[*reg].curso);
	printf("Insira o Ano de Início: ");
	scanf("%d", &vet[*reg].anoInicio);
	printf("Insira a idade do Aluno: ");
	scanf("%d", &vet[*reg].idade);
	
	printf("\nFoi criado o Aluno: \n");
	printf("RA\tNOME\tCURSO\tANO\tIDADE\n");	
	printf("%d\t%s\t%s\t%d\t%d\n", vet[*reg].ra, vet[*reg].nome, vet[*reg].curso, vet[*reg].anoInicio, vet[*reg].idade);	
}

void ListaAlunos(Aluno *vet, int x){	// Lista todos os alunos criados anteriormente
	int i;
	if (x==0){
		printf("Nenhum aluno foi criado ainda.\n");
	}else{
		printf("RA\tNOME\tCURSO\tANO\tIDADE\n");
		for(i=0; i<x; i++){
			printf("%d\t%s\t%s\t%d\t%d\n", vet[i].ra, vet[i].nome, vet[i].curso, vet[i].anoInicio, vet[i].idade);
		}
	}
}

void BuscarAluno(Aluno *vet, int x){
	int i, ra;
	if (x==0){
		printf("Nenhum aluno foi criado ainda.\n");
		return 0;
	}
	
	printf("Insira o número do RA: ");
	scanf("%d", &ra);
	
	for(i=0;i<x;i++){
		if(ra == vet[i].ra){
			printf("\nAluno encontrado:\n");
			printf("RA\tNOME\tCURSO\tANO\tIDADE\n");
			printf("%d\t%s\t%s\t%d\t%d\n", vet[i].ra, vet[i].nome, vet[i].curso, vet[i].anoInicio, vet[i].idade);
			return 0;
		}
	}
	printf("Aluno não encontrado.\n");
}


