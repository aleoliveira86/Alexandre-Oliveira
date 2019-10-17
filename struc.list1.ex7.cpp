#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
Criar dois vetores de cinco posi��es, sendo que cada vetor corresponde a um jogador.
O vetor � especificado pela struct Lutador, com os seguintes campos:
� Nome do lutador
� Poder do jogador (valor inteiro gerado pela fun��o rand)
O nome do lutador dever� ser preenchido pelo usu�rio e o poder da arma dever� ser
gerado pela fun��o rand (n�o mostrar o valor gerado ao preencher).
O jogo consiste em comparar cada posi��o de um vetor com a mesma posi��o do
outro vetor e mostrar o nome, poder e qual dos dois venceu a batalha (maior poder). 
*/
 
struct lutador{
    char nome[30];
    int poder;
};
int main(){
    lutador v1[5];
    lutador v2[5];
    int i;
     
    srand(time(NULL));
    for (i=0;i<5;i++){
        printf("Nome do lutador 1: ");
        gets(v1[i].nome);
        v1[i].poder = rand();
        printf("Nome do lutador 2: ");
        gets(v2[i].nome);
        v2[i].poder = rand();
    }
     
    printf("\nBatalhando\n");
    for (i=0;i<5;i++){
        printf("Lutador %s Poder %d \tvs\tLutador %s Poder %d", v1[i].nome, v1[i].poder, v2[i].nome, v2[i].poder);
        if (v1[i].poder>v2[i].poder){
            printf("\n%s venceu\n", v1[i].nome);
        } else {
            printf("\n%s venceu\n", v2[i].nome);
        }
    }
    return 0;
}
