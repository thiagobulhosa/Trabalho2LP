#include "coletor.h"

void *malloc2(int tamanho)
{
    void *end=malloc(tamanho);
    ((Memoria*)end)->cont=1;
    return end;
}

void *atrib(struct memoria *end, void *valor)
{
    end->valor=valor;
}

void atribui2(struct memoria **ed1, struct memoria **ed2)  ///Fazer ponteiro de um apontar pro outro
{
    struct memoria *aux;
    (*ed1)->cont--;
    if((*ed1)->cont==0)
    {
        printf("\nA area que armazenava o valor %d, com %d referencias foi limpa\n", (*ed1)->valor, (*ed1)->cont);
        aux=*ed1;
        free(aux);
    }
    (*ed2)->cont++;
    (*ed1)=*ed2;
}

void Imprime_memoria(struct memoria *ed1)
{
    printf("\n%d,%d\n", ed1->valor,ed1->cont);
}
