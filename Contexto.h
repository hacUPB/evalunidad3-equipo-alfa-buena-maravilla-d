#ifndef CONTEXTO_H_
#define CONTEXTO_H_

#include "Interfaz.h"

typedef struct 
{
    Interfaz* estrategia;
    char * nombre;
}Contexto;

//prototipamos las funciones que vamos a usar en el .c
Contexto *nuevocontexto();
void ctorContexto(Contexto*, void*);
void dtorContexto(Contexto*);
void SeteoEstrategia(Contexto*, void*);
void Dosome(Contexto*);

#endif
