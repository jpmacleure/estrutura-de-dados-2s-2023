#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lista.h"

int main(int argc, char* argv[]){

    FILE* f;
    No* lista_ordenada = NULL;
    No* lista_n_ordenada = NULL;
    float valor;
    clock_t start, end;
    double cpu_time_used;
    char arq[100];
    if(argc == 1){
        strcpy(arq, "1kk_rand_float.csv");
    }
    else{
        strcpy(arq,"rand.csv");
    }
    
    // LISTA N ORDENADA
    f = fopen(arq, "r");
    if(f == NULL){
        perror("Erro ao abrir arquivo.");
        exit(1);
    }

    start = clock();
    while(!feof(f)){
        
        fscanf(f,"%f\n",&valor);
        if(lista_n_ordenada == NULL){
            lista_n_ordenada = no(valor, NULL);
        }
        else{
            lista_inserir_no(lista_n_ordenada, no(valor, NULL));
        }
        
    }
    end = clock();
    fclose(f);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo (s) carregamento lista nao ordenada: %.6fs", cpu_time_used);
    lista_liberar(lista_n_ordenada);
    lista_n_ordenada = NULL;

    // LISTA ORDENADA
    f = fopen(arq, "r");
    if(f == NULL){
        perror("Erro ao abrir arquivo.");
        exit(1);
    }

    start = clock();
    while(!feof(f)){
        
        fscanf(f,"%f\n",&valor);
        if(lista_ordenada == NULL){
            lista_ordenada = no(valor, NULL);
        }
        else{
            lista_inserir_no_ordenado(&lista_ordenada, no(valor, NULL));
        }
        
    }
    end = clock();
    fclose(f);
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTempo (s) carregamento lista ordenada: %.6fs", cpu_time_used);
    lista_liberar(lista_ordenada);
    lista_ordenada = NULL;

    exit(0);
}