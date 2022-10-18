#ifndef ESTRATEGIAB_H_
#define ESTRATEGIAB_H_

//"Heredamos" el interfaz
#include "Interfaz.h"

//Definimos la "Clase" estrategia B
typedef struct 
{
    //Le doy el interfaz y el nombre de la estrategia que voy a utilizar
    Interfaz estratB;

}estrategiaB;   //Estrategia B es el nombre de nuestra nueva estructura

//Prototipmos los "metodos" o funciones que vamos a hacer en nuestro .c
estrategiaB *nuevaestrategiaB();
void ctorEstrategiaB(estrategiaB *);
void dtorEstrategiaB(estrategiaB *);
void Reverse (char*);

#endif