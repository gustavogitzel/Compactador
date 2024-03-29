#include <stdio.h>
#include <stdlib.h>

#include "FilaPrioridade.h"
#include "Compactador.h"

typedef int inteiro;   // 4bits

typedef enum{
    false, true
}boolean;

void Compactar()
{
    Compactador comp;
    FilaPrioridade fila;
    char c;
    char caminho[100];

    printf("Digite o caminho do arquivo: ");

    scanf("%s", caminho);

    FILE *arq;
    arq = fopen(caminho, "r");

    inicieFila(&fila, 255);

    while((c = fgetc(arq)) != EOF)
        inserir(&fila, c);

    ordenar(&fila);

    converterEmArvore(&fila);
    inicieCompactador(&comp, &fila.vetor[0]);
    percorrerInOrdem(&comp);
    printf("aaaaaa");
    fclose(arq);
    //encerrar(&fila);
}


int main()
{
    inteiro resposta;
    printf("--> Tratador de Arquivos <--\n\n");
    printf("1 - Compactar\n");
    printf("2 - Descompactar\n");

    resposta = scanf("%d", &resposta);

    switch(resposta)
    {
        case 1: Compactar();break;
    }

    return 0;
}