#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){

    char** tabela = tabela_hash();

    put("Abelha", "Inicio", tabela);
    put("Bola", "Meio", tabela);
    put("zebra", "Fim", tabela);

    printf("%s\n", get("Abelha", tabela));
    printf("%s\n", get("Bola", tabela));
    printf("%s\n", get("Zebra", tabela));

    printf("contains(Churras)=%d\n", contains("Churras", tabela));
    printf("contains(Bola)=%d\n", contains("Bola", tabela));
    printf("contains(Bala)=%d\n", contains("Bala", tabela));

    exit(0);
}