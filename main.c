///Leandro Bucci
///Thiago Bulhosa
///Victor Hugo

#include <stdio.h>
#include <stdlib.h>
#include "coletor.h"

int main(){
	Memoria *v=NULL, *w=NULL, *z=NULL, *y=NULL;

	v=malloc2(sizeof(Memoria));
	atrib(v, 10);

	w=malloc2(sizeof(Memoria));
	atrib(w, 20);

	z=malloc2(sizeof(Memoria));
	atrib(z,67);

	y=malloc2(sizeof(Memoria));
	atrib(y,203);

	atribui2(&v,&w);
	atribui2(&y,&z);

	Imprime_memoria(v);
	Imprime_memoria(w);
	Imprime_memoria(y);
	Imprime_memoria(z);
}
