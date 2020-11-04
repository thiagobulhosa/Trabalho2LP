#include <stdio.h>
#include <stdlib.h>

typedef struct memoria{
    void *valor;
    int cont;
}Memoria;

void *malloc2(int tamanho);
void *atrib(Memoria *end, void *valor);
void atribui2(Memoria **ed1, Memoria **ed2); ///Endereço 1 apontara para o endereço2;
void Imprime_memoria(Memoria *ed1);
