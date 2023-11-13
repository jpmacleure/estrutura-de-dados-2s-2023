#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main(int argc, char* argv[]){

    No* raiz = NULL;
    ab_inserir_no(&raiz, 2);
    ab_inserir_no(&raiz, 7);
    ab_inserir_no(&raiz, 5);
    ab_inserir_no(&raiz, 1);

    ab_imprimir_em_ordem(raiz);

    exit(0);
}