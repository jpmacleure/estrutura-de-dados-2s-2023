#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int adicionar_produto(Produto *produtos, int qtdProdutos){
    Produto p;
    int idExistente = 0;
    printf("\n");
    printf("Digite o nome do produto\n");
    scanf("%s", &p.nome);
    printf("Digite o ID do produto\n");
    scanf("%d", &p.id);
    printf("Digite quantidade do produto\n");
    scanf("%d", &p.qtd);

    
    for(int i = 0; i < qtdProdutos; i++){
        if(produtos[i].id == p.id){            
            printf("\nID já cadastrado\n");
            idExistente = 1;
        }
    }

    if(!idExistente){
        produtos[qtdProdutos] = p;
        return 1;
    }

    return 0;
}

void listar_produtos(Produto *produtos, int qtdProdutos){
    printf("\n");
    for(int i = 0; i < qtdProdutos; i++){
        printf("%d - %s - %d\n", produtos[i].id, produtos[i].nome, produtos[i].qtd);
    }
}

void editar_produto(Produto *produtos, int qtdProdutos){
    int id;
    listar_produtos(produtos, qtdProdutos);
    printf("\nInforme o ID do produto\n");
    scanf("%d", &id);
    for(int i = 0; i < qtdProdutos; i++){
        if(produtos[i].id == id){            
            printf("Informe a quantidade atual\n");
            scanf("%d", &produtos[i].qtd);
        }
    }
}

int remover_produto(Produto *produtos, int qtdProdutos){
    int id;
    int removeu = 0;
    listar_produtos(produtos, qtdProdutos);
    printf("\nInforme o ID do produto\n");
    scanf("%d", &id);
    for(int i = 0; i < qtdProdutos; i++){
        if(produtos[i].id == id){            
            produtos[i] = produtos[qtdProdutos-1];
            removeu = -1;
        }
    }
    return removeu;
}