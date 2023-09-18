#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char* argv[]){

    Objeto o1;
    Objeto o2;
    Objeto* o;
    o1.valor = 'A';
    o2.valor = 'B';

    Pilha* P = pilha();
    empilhar(&o1, P);
    empilhar(&o2, P);

    do{
        o = desempilhar(P);
        if(o != NULL){
            printf("%c\n", o->valor);
        }
    }while(o != NULL);

    exit(0);
}