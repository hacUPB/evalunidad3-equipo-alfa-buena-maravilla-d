#ifndef ESTRATEGIAA_H_
#define ESTRATEGIAA_H_

//Tramos el interfaz
#include "Interfaz.h"

//Defino una "clase" estrategia A
typedef struct 
{
    //le doy un tipo de dato que es una estructura y el nombre de la estrategia
    Interfaz estrategiaA;
    //Con esto puedo entrar tambien al tipo de dato 'algortimo' del interfaz
}estrategiaA;   //Estrategia A es el nombre de la estructura

//Prototipamos los "metodos" o funciones que va a hacer nuestra clase en el .c
estrategiaA *nuevaestrategiaA();
void ctorEstrategiaA(estrategiaA *);
void dtorEstrategiaA(estrategiaA *);

#endif