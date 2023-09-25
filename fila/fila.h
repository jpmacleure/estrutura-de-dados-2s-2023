typedef struct Objeto {
    char valor;
    struct Objeto* objeto_anterior;
} Objeto;

typedef struct Fila {
    Objeto* inicio;
    Objeto* final;
    int quantidade_objetos;
} Fila;

Fila* fila();
void enfileirar(Objeto* o, Fila* F);
Objeto* desenfileirar(Fila* F);