#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cpf;
    char data_nascimento[11];
    char nome[100];
} Pessoa;

int main(int argc, char* argv[]){

    FILE *f;

    f = fopen("teste.dat", "wb");
    if(f == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }

    Pessoa p;
    strcpy(p.nome, "Joao");
    p.cpf = 123;
    strcpy(p.data_nascimento, "11/11/1111");

    fwrite(&p, sizeof(Pessoa), 1, f);
    fclose(f);

    f = fopen("teste.dat", "r");
    Pessoa p2;
    fread(&p2, sizeof(Pessoa), 1, f);
    printf("%s - %d - %s", p2.nome, p2.cpf, p2.data_nascimento);
    fclose(f);
    exit(0);
}