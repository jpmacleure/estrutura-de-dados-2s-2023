#include <stdio.h>

double calcular_dobro(double n){
    return n*2;
}

int verificar_numero_primo(int n){
    return 0;
}

int main(int argc, char* argv[]){
    int n = -11;
    int n2 = 0;
    float f1 = 1.5;
    double d1 = 1.55555555;
    char letra = 'J';

    printf("\n%s\n", argv[1]);


    if(n2){
        printf("0 eh verdadeiro\n");
    }

    if(n){
        printf("-11 eh verdadeiro\n");
    }
    printf("\n");
    for(n = 0; n < 10; n++){
        printf("%d ", n);
    }
    printf("\n");
    n = 0;
    do{
        printf("%d ", n);
        n++;
    } while (n < 10);

    printf("\nO dobro de %f eh %f", d1, calcular_dobro(d1));

    return 0;
}