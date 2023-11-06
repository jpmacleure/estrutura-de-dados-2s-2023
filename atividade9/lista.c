#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(float valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    if(no == NULL){
        perror("erro ao alocar memoria");
        exit(1);
    }
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* L, No* no){
    if(L != NULL){
        if(L->proximo_no == NULL){
            L->proximo_no = no;
        }
        else{
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_inserir_no_ordenado(No** L, No* no){
    if(*L != NULL){
        if((*L)->valor >= no->valor){
            no->proximo_no = *L;
            *L = no;
        }else if((*L)->proximo_no != NULL){
            lista_inserir_no_ordenado(&(*L)->proximo_no, no);
        }
        else{
            (*L)->proximo_no = no;
        }
    }
}

void lista_imprimir(No* L){
    if(L != NULL){
        printf("%.2f ", L->valor);
        lista_imprimir(L->proximo_no);
    }
}

int lista_quantidade_nos(No* L){
    if(L != NULL){
        return 1 + lista_quantidade_nos(L->proximo_no);
    }
    return 0;
}

No* lista_copiar(No* L){
    if(L != NULL){
        return no(L->valor, lista_copiar(L->proximo_no));
    }
    return NULL;
}

void lista_concatenar(No* L, No* Lc){
    lista_inserir_no(L, Lc);
}

void lista_liberar(No* L){
    if(L != NULL){
        lista_liberar(L->proximo_no);
        free(L);
    }
}