#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
    FILE *fp;

    fp = fopen("teste.txt", "r");

    if(fp == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    char c;
    
    do{
        c = (char)fgetc(fp);
        printf("%c", c);
    } while (c != EOF);    

    fclose(fp);

    FILE *f_bin;
    f_bin = fopen("bin.dat", "w");


    if(f_bin == NULL){
        perror("Nao foi possivel abrir o bin.dat");
        exit(1);
    }

    int i[] = {1, 2};

    fwrite (&i, sizeof(int), 2, f_bin);

    fclose(f_bin);


    f_bin = fopen("bin.dat", "r");    
    if(f_bin == NULL){
        perror("Nao foi possivel abrir o bin.dat");
        exit(1);
    }

    int j;
    printf("\n");
    fread(&j, sizeof(int), 1, f_bin);
    while(!feof(f_bin)){
        printf("%d\n", j);
        fread(&j, sizeof(int), 1, f_bin);
    }
    fclose(f_bin);


    exit(0);
}