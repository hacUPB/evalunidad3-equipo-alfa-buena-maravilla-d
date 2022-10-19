#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contexto.h"

//"Instanciamos" la clase contexto
Contexto *nuevocontexto()
{
    return (Contexto*)malloc(sizeof(Contexto));
}

//Constructor
void ctorContexto(Contexto * this, void * estrategia)
{
    //Entramos al dato estrategia que es un tipo Interfaz*
    this->estrategia = (Interfaz*)estrategia;
    //Entramos al nombre de nuestra estructura y alacenamos char[15]
    this->nombre = malloc(sizeof(char[15]));
    
    //Creamos la lista y la scaneamos
    char name[15];
    
    scanf("%s",name); 
    printf("Porfavor ingrese la lista:\n");
    //Le copiamos al nombre, la lista ingresada
    strcpy(this->nombre,name);
}

//Destructor 
void dtorContexto(Contexto * this)
{
    //Libero la memoria que almacene en el constructor
    free(this->nombre);
}

//Seteamos la estrategia
void SeteoEstrategia(Contexto * this, void * estrategia)
{
    //Le damos a esrategia el parametro que entre por el void*estrategia
    this->estrategia = (Interfaz*)estrategia;
}

//Este es el metodo DoSomething
void Dosome(Contexto * this)
{
    //Entramos al this, que entra a la estrategia que entra al algoritmo que hayamos enviado al interfaz
    //Y ahi le enviamos el nombre
    this->estrategia->algoritmo(this->nombre);
}
