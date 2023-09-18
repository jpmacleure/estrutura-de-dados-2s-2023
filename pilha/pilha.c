#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha p;
    p.topo = NULL;
    p.quantidade = 0;
    Pilha* p1 = &p;
    return p1;
}

void empilhar(Objeto* o, Pilha* P){
    printf("empilhando %c\n", o->valor);
    o->proximo_objeto = P->topo;
    P->topo = o;
    P->quantidade++;
}

Objeto* desempilhar(Pilha* P){
    Objeto* o = P->topo;
    printf("deempilhando %c\n", o->valor);
    P->topo = o->proximo_objeto;
    P->quantidade--;
    return o;
}