#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* fila(){
    Fila* F = (Fila*) malloc(sizeof(Fila));
    F->inicio = NULL;
    F->quantidade_objetos = 0;
    return F;
}

void enfileirar(Objeto* o, Fila* F){
    if(F->inicio == NULL){
        F->inicio = o;
        F->final = o;
        o->objeto_anterior = NULL;
    }else{
        F->final->objeto_anterior = o;
        F->final = o;
    }
    F->quantidade_objetos++;
}

Objeto* desenfileirar(Fila* F){
    if(F->quantidade_objetos == 0){
        return NULL;
    }
    Objeto* o = F->inicio;
    F->inicio = o->objeto_anterior;
    F->quantidade_objetos--;
    return o;
}