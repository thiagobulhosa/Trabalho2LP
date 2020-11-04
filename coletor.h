typedef struct memoria{
    int valor;
    int cont;
}Memoria;

Memoria *malloc2();
void *atrib(Memoria *end, int valor);
void atribui2(Memoria **ed1, Memoria **ed2); //Endereço 1 apontara para o endereço2;
void Imprime_memoria(Memoria *ed1);
