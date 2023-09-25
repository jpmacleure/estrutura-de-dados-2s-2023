#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char* argv[]){

    Objeto o1;
    o1.valor = 'A';
    Objeto o2;
    o2.valor = 'B';
    Objeto o3;
    o3.valor = 'C';

    Fila* F = fila();
    enfileirar(&o1, F);
    enfileirar(&o2, F);
    enfileirar(&o3, F);

    Objeto* o = NULL;
    do{
        o = desenfileirar(F);
        if(o != NULL){
            printf("%c\n", o->valor);
        }
    }while(o != NULL);

    exit(0);
}