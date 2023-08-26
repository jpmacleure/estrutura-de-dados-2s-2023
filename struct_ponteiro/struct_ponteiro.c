#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto{
    int x;
    int y;
} Ponto;

int main(int argc, char* argv[]){

    int a = 3;
    int b = a;
    int* p = &a;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("p = %p\n", p);
    printf("&a = %p\n", &a);

    int* p1;
    
    p1 = malloc(sizeof(int)*3);
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);
    *p1 = 2;
    printf("*p1 = %d\n", *p1);

    p1++;
    *p1 = 5;
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);

    
    p1[1] = 7;
    printf("p1 = %p\n", &p1[1]);
    printf("*p1 = %d\n", p1[1]);



    Ponto ponto;
    ponto.x = 1;
    ponto.y = 2;
    printf("(%d, %d)\n", ponto.x, ponto.y);
    int qtd_pontos = atoi(argv[1]);
    Ponto* pontos = malloc(sizeof(Ponto)*qtd_pontos);
    for(int i = 0; i < qtd_pontos; i++){
        fflush(stdin);
        scanf("%d", &pontos[i].x);
        fflush(stdin);
        scanf("%d", &pontos[i].y);
    }

    for(int i = 0; i < qtd_pontos; i++){
        printf("(%d, %d)\n", pontos[i].x, pontos[i].y);
    }

    return 0;
}