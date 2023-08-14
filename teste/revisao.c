#include <stdio.h>
#include <string.h>

double dobrar(double d){
    return (2.0)*d;
}

int main(int argc, char* argv[]){
    int i = -11;
    int n = 0;
    float f = 1.5;
    double d = 1.55555555;
    char c = 'J';
    char* string = "nao existe string em C.";
    int array_i[] = {1, 2, 3};

    if(n){
        printf("\n%d eh verdadeiro", n);
    }

    if(i){
        printf("\n%d eh verdadeiro", i);
    }

    printf("\n%c - %s (%d)", c, string, strlen(string));
    printf("\n");
    for(n = 0; n < strlen(string); n++){
        printf("%c", string[n]);
    }

    printf("\n");
    n = 0;
    while(n < strlen(string)){
        printf("%c", string[n]);
        n++;
    }

    printf("\nO dobro de %f eh %f", d, dobrar(d));

    printf("\n");
    for(n = 0; n < (sizeof(array_i) / sizeof(int)); n++){
        printf("%d ", array_i[n]);
    }

    return 0;
}