#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int v[10];
    v[0] = 1;
    
    int v1[3] = {5, 11, 3};

    printf("%d", sizeof(v1)/sizeof(int));


    return 0;
}