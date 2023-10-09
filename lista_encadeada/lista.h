typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no);
void lista_inserir_no(No* L, No* no);
void lista_imprimir(No* L);
int lista_quantidade_nos(No* L);
No* lista_copiar(No* L);
void lista_concatenar(No* L, No* Lc);
void lista_liberar(No* L);