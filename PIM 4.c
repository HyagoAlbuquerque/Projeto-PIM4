#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define SIZE 100

char nome[SIZE];
char email[SIZE];
int cpf[SIZE];
int rg[SIZE];
char endereco[SIZE];
int habilitacao[SIZE];
void cadastro();
void NovaLocacao();
int op;

//Menu Gerencimanto de Funcionários

void Funcionario(void){
	int opc;
	while(1){
		system("cls");
		puts("\nGerenciamento de Funcionários\n\n");
		puts("1 - Lista de Funcionários\n");
		puts("2 - Adicionar Funcionário\n");
		puts("3 - Remover Funcionário\n");
		puts("0 - Retornar ao Menu Principal\n");
		puts("\n\n");
		
		scanf ("%d",&opc);
		if (!opc) break;
		
		
		switch(opc){
			case 1:
				puts("::EDITAR::\n");
				break;
				
			case 2:
				puts("::EDITAR::\n");
				break;
				
			case 3:
				puts("::EDITAR::\n");
				break;
				
			default:
				puts("Opção inválida, tente novamente.\n");
				getchar;
				getchar;
				break;
		}
	}
};

//Menu Gerenciamento de Veículos

void Veiculo(void){
	int opc;
	while(1){
		system("cls");
		puts("\nGerenciamento de Veículos\n\n");
		puts("1 - Adicionar Veículo\n");
		puts("2 - Veículo na Oficina\n");
		puts("3 - Remover Veículo\n");
		puts("0 - Retonar ao Menu Principal\n");
		
		scanf ("%d",&opc);
		if (!opc) break;
		
		
		switch(opc){
			case 1:
				puts("::EDITAR::\n");
				break;
			
			case 2:
				puts("::EDITAR::\n");
				break;
				
			case 3:
				puts("::EDITAR::\n");
				break;
				
			default:
				puts("Opção inválida, tente novamente.");
				getchar;
				getchar;
				break;
		}
	}
};

//Agenda de Alocação

void Agenda(void){
	int opc;
	while(1){
		system("cls");
		puts("LISTA DE LOCAÇÃO\n\n");
		break;
	}
};

//Agendamento de Locação com função de pesquisa por CPF de clientes cadastrados 

void NovaLocacao(void){
	int i;
	int cpfpesquisa;
	
	do{
		system("cls");
		printf("*****************************************************************************\n");
		printf("                               Nova Locação                                      \n\n");
		printf("*****************************************************************************\n\n\n");
		printf("\nDigite o CPF do Cliente\n");
		scanf("%d", &cpfpesquisa);
		for(i=0;i<SIZE;i++){
			if(cpf[i]==cpfpesquisa){
				printf("\nNome: %s\nE-mail: %s\nCPF: %d\nRG: %d\nEndereço: %s\nNº da Habilitação: %d\n\n", nome[i], email[i], cpf[i], rg[i], endereco[i], habilitacao[i]);
				
					}
				}
		
			printf("\nDigite 1 para pesquisar novamente ou 2 para continuar a locação\n");
			scanf("%d", &op);
		}while(op==1);
		
}

//Cadastro de Clientes

void Cadastro(void){
	static int linha;
	do{
		system("cls");
		printf("*****************************************************************************\n");
		printf("                                 Cadastro                                      \n\n");
		printf("*****************************************************************************\n\n\n");
		printf("\nDigite o nome do cliente:\n");
		scanf("%s", &nome[linha]);
		printf("\nDigite o e-mail do cliente:\n");
		scanf("%s", &email[linha]);
		printf("\nDigite o CPF do cliente:\n");
		scanf("%d", &cpf[linha]);
		printf("\nDigite o RG do cliente:\n");
		scanf("%d", &rg[linha]);
		printf("\nDigite o endereço do cliente:\n");
		scanf("%s", &endereco[linha]);
		printf("\nDigite o Nº da habilitação do cliente:\n");
		scanf("%d", &habilitacao[linha]);
		printf("\nDigite 1 para continuar ou outro valor para sair. \n");
		scanf("%d", &op);
		linha++;
	}while(op==1);
};

//Menu Gerenciamento de Alocação

void Locacao(void){


 int opc;
 while (1){
 	 system("cls");
 	 puts("*****************************************************************************");
	 puts("\n                          Locação de Veículos                               \n\n");
	 puts("*****************************************************************************\n\n\n");
	 puts("1 - Agendar Locação\n");
	 puts("2 - Cadastrar Cliente\n");
	 puts("0 - Returnar ao Menu Principal\n");
	 puts("\n\n");

	 scanf ("%d",&opc);	 
	 if (!opc) break;


	 switch(opc){
			case 1:
				  puts("Iniciar nova Locação\n\n");
				  NovaLocacao();
				  break;

			case 2:
				system("cls");
				  puts("Cadastrar Cliente\n\n");
				  Cadastro();
				  break;

			default:
				  puts("Opção inválida, tente novamente.\n\n");
				  getchar;
				  getchar;
				  break;
	   }
}	
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
//Configuração de Idioma
	setlocale(LC_ALL,"Portuguese");
	
// Menu Principal

int opcao;
while(1){
		system("cls");
		puts("*****************************************************************************");
		puts("\n                         Legal Rent a Car                                \n\n");
		puts("*****************************************************************************\n\n\n");
		puts("1 - Locação de Veículos\n");
		puts("2 - Gerenciamento de Funcionários\n");
		puts("3 - Gerenciamento de Veículos\n");
		puts("4 - Agenda de Locação\n");
		puts("5 - Sair\n");
		puts("\n\n");
		scanf ("%d",&opcao);

	if (!opcao) break;

		switch (opcao){
		case 1:	
			puts("\nLocação de Veículos\n\n");
			Locacao();
			break;
		case 2:
			puts("Gerenciamento de Funcionários\n");
			Funcionario();
			break;
		case 3:
			puts("Gerenciamento de Veículos\n");
			Veiculo();
			break;
		case 4:
			printf("Agenda de Locação\n");
			Agenda();
			break;
		default:
			printf("Opção inválida, tente novamente.\n");
			getchar;
			getchar;
			break;
	   }
}
return 0;
}
