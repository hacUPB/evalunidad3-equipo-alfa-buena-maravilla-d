#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cestrategiaA.h"
#include "Contexto.h"

//Juli, todo esto se repite, se hace de la misma forma


//Primero "Instancio" la estrategia 
estrategiaA *nuevaestrategiaA()
{
    //Que es reservando en la el tamaño de estrategia A
    //Y retornamos un puntero estrategia A
    return (estrategiaA *)malloc(sizeof(estrategiaA));
}

//Luego vamos a crear un algortimo especifico de la estrategia A
void algoritmoA(void * nombre)
{
    //Imprimimos un mensaje parecido al de C#
    printf("Contexto: Imprimimos los datos tal cual nos fueron dados:\n");

    //Creamos un puntero que reserve un espacio para la lista
    char *lista = malloc(sizeof(char[15]));

    //Copiamos la lista que viene parametrizada(nombre) a lista
    strcpy("%s", lista);

    //Luego liberamos 
    free(lista);
}


//Constructor
void ctorEstrategiaA(estrategiaA * this)
{
    //Al constructor le mandamos el parametro Interfaz con puntero para que construya con el constructor del interfaz
    ctorInterfaz((Interfaz*)this);

    //Luego le damos al dato algoritmo la funcion algoritmo A
    this->estrategiaA.algoritmo = algoritmoA;

}

//Destructor
void dtorEstrategiaA(estrategiaA *this)
{
    dtorInterfaz((Interfaz*)this);
}