///Leandro Bucci
///Thiago Bulhosa
///Victor Hugo

#include "coletor.h"

int main(){
    int *a = (int*) malloc (sizeof(int));
    int *b = (int*) malloc (sizeof(int));
    *a=50;
    *b=60;
    char *c = (char*) malloc (sizeof(char));
    char *d = (char*) malloc (sizeof(char));
    *c='a';
    *d='b';

	Memoria *v=NULL, *w=NULL, *z=NULL, *y=NULL;

	v=malloc2(sizeof(Memoria));
	atrib(v, *a);

	w=malloc2(sizeof(Memoria));
	atrib(w, *b);

	z=malloc2(sizeof(Memoria));
	atrib(z, *c);

	y=malloc2(sizeof(Memoria));
	atrib(y, *d);

	atribui2(&v,&w);
	atribui2(&z,&y);

	///Imprime area de memoria e numero de referencias
	Imprime_memoria(v);
	Imprime_memoria(w);
	Imprime_memoria(y);
	Imprime_memoria(z);

	///Demonstracao conteudo
	printf ("\nImpressao conteudo: %c %c\n", z->valor , y->valor);
	printf ("Impressao conteudo: %d %d\n", v->valor, w->valor );
}
