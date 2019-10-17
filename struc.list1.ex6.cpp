/*Fazer um programa para simular uma agenda de telefones. Para cada pessoa deverá constar os seguintes dados:  
• Código  
• Nome  
• E-mail  
• Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade, estado, país).  
• Telefone (contendo campo para DDD e numero)  
• Data de aniversario (contendo campo para dia, mês, ano).  
• Observações: Uma linha (string) para alguma observação especial.  
a)Definir a estrutura acima.  
b)Declarar a variável agenda (vetor) com capacidade de agendar até 100 cadastros. 
c)Possibilitar a visualização dos dados.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct telefone
{
		
	int ddd, numerotel;
};

struct endereco
{
	char rua[50], complem[50], bairro[50], cidade[50], estado[50], pais[50];
	int numeroend, cep;
};

struct datanasc
{
	int dia, mes , ano;
};

struct agenda
{

	char nome[40], email[50];
	char obs[100];
	telefone telefone;
	endereco endereco;
	datanasc datanasc;
};

main(){
	
	int opcao;
	char dadospesq[40];
	int i,cont;
	int nCasos=100;
	agenda agenda[nCasos];
	
	

	
	for(cont=0; cont<nCasos; cont++){
		printf("Digite 1 para incluir contatos: \n");
		printf("Digite 2 para mostrar contatos: \n");
		printf("Digite 3 para buscar contatos: \n");
		scanf("%d", &opcao);
		system ("cls");
		
		switch(opcao){
		
		case 1:
			for(i=1; i<nCasos; i++){
				printf("Codigo [%d]: ",i);
				printf("Digite o nome da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].nome);
				printf("Digite o email da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].email);
				printf("Digite o DDD do telefone da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].telefone.ddd);
				printf("Digite o numero do telefone da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].telefone.numerotel);
				printf("Digite o nome da rua da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.rua);
				printf("Digite o numero da rua da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].endereco.numeroend);
				printf("Digite o complemento do endereco da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.complem);
				printf("Digite o bairro do endereco da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.bairro);
				printf("Digite a cidade do endereco da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.cidade);
				printf("Digite o estado do endereco da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.estado);
				printf("Digite o pais do endereco da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].endereco.pais);
				printf("Digite o CEP do endereco da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].endereco.cep);
				printf("Digite o dia do nascimento da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].datanasc.dia);
				printf("Digite o mes do nascimento da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].datanasc.mes);
				printf("Digite o ano do nascimento da pessoa[%d]: ",i);
				scanf("%d", &agenda[i].datanasc.ano);
				printf("Digite as observacoes da pessoa[%d]: ",i);
				fflush(stdin);
				gets(agenda[i].obs);
			
				system ("cls");
			}
			break;
			
			case 2:
				for(i = 0; i<nCasos; i++){
					printf("Nome: %s\n",agenda[i].nome);
					printf("Email: %s\n",agenda[i].email);				
					printf("Telefone: %d-%d\n",agenda[i].telefone.ddd,agenda[i].telefone.numerotel);
					printf("Endereco: Rua: %s, Numero: %d, Bairro: %s, Cidade: %s, Estado: %s, Pais: %s, CEP: %d, Complemento: %s\n",agenda[i].endereco.rua, agenda[i].endereco.numeroend, agenda[i].endereco.bairro, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais, agenda[i].endereco.cep, agenda[i].endereco.complem);
					printf("Data de nascimento: %d/%d/%d\n",agenda[i].datanasc.dia,agenda[i].datanasc.mes,agenda[i].datanasc.ano);
					printf("Observacoes: %s\n", agenda[i].obs);
					printf("\n\n");
				}
				break;
			
			case 3:
				printf("Informe o nome desejado: \n");
				fflush(stdin);
				gets(dadospesq);
				for(i=1; i<nCasos; i++){
					if(strcmp(dadospesq, agenda[i].nome)==0){
						printf("Nome: %s\n",agenda[i].nome);
						printf("Email: %s\n",agenda[i].email);				
						printf("Telefone: %d-%d\n",agenda[i].telefone.ddd,agenda[i].telefone.numerotel);
						printf("Endereco: Rua: %s, Numero: %d, Bairro: %s, Cidade: %s, Estado: %s, Pais: %s, CEP: %d, Complemento: %s\n",agenda[i].endereco.rua, agenda[i].endereco.numeroend, agenda[i].endereco.bairro, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais, agenda[i].endereco.cep, agenda[i].endereco.complem);
						printf("Data de nascimento: %d/%d/%d\n",agenda[i].datanasc.dia,agenda[i].datanasc.mes,agenda[i].datanasc.ano);
						printf("Observacoes: %s\n", agenda[i].obs);
						printf("\n\n");			
					}
					
					
				}
				break;
			
				default:
				printf("Opcao invalida\n\n");	

			}	
			cont++; 		
		}
		return 0;
	
	}



