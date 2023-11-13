#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

No* ab_no(int valor){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->no_esquerda = NULL;
    no->no_direita = NULL;
    return no;
}

void ab_inserir_no(No** raiz, int valor){

    if(*raiz == NULL){
        *raiz = ab_no(valor);
    }
    else{
        if((*raiz)->valor >= valor){
            ab_inserir_no(&(*raiz)->no_esquerda, valor);
        }
        else if((*raiz)->valor < valor){
            ab_inserir_no(&(*raiz)->no_direita, valor);
        }
    }

}

void ab_imprimir_em_ordem(No* raiz){
    if(raiz != NULL){
        ab_imprimir_em_ordem(raiz->no_esquerda);
        printf("%d ", raiz->valor);
        ab_imprimir_em_ordem(raiz->no_direita);
    }
}