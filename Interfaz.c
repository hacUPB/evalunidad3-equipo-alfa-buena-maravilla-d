#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Interfaz.h"

//"Instanciamos" el interfaz en el .h para utilizar las funciones que prototipamos
Interfaz *NuevaEstrategia()
{
    return (Interfaz *)malloc(sizeof(Interfaz));
}

//Creamos una funcion que trae el nombre y no retorna nada
void algoritmovacio(void * nombre)
{
    //Creamos un puntero a una cadena de caracteres
    char * ptrnombre = malloc(sizeof(char[15]));

    //A este puntero le copiamos una cadena de caracteres
    strcpy(ptrnombre,"Sin Estrategia");

    //Luego imprimimos %s (un string)
    printf("%s", ptrnombre);

    //Liberamos la memoria
    free(ptrnombre);
}
//Creamos el constructor
void ctorInterfaz(Interfaz * this)
{
    //Con el puntero this, accedemos al tipo de dato algoritmo
    //Y ahi le damos la direccion del algrotimo vacio
    this->algoritmo = &algoritmovacio;
}

//Destructor para liberar memoria
void dtorInterfaz(Interfaz * this)
{
    //Liberamos this
    free(this);
}


