//
// Created by u18194 on 25/10/2019.
//

#ifndef COMPACTADOR_COMPACTADOR_H
#define COMPACTADOR_COMPACTADOR_H

#include "Struct.h"

typedef struct {
    int  qtd;
    char qual;
    char *codigo;
}Codigo;

typedef struct {
    No  *raiz;
    Codigo *codigo;
    int qtd;
}Compactador;

static int tamanhoCodigo;

extern void inicieCompactador(Compactador *compactador, No *inicio);
extern void percorrerInOrdem(Compactador *compactador);
extern int qtdFolhas(Compactador *compactador);
int quantasFolhas(No *atual);
void percorrer(Compactador *compactador, No *atual, char *codigo, int qtd);



#endif //COMPACTADOR_COMPACTADOR_H
