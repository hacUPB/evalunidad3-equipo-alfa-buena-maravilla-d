#ifndef INTERFAZ_H_
#define INTERFAZ_H_

//Juli, los .h son para definir estructuras, definir tipos de datos y los objetos que vamos a utilizar en los .c

//Luego utilizamos el typedef void para crear untipo de dato puntero que sea void*
typedef void (*algoritmo)(void *);

//Luego definimos la "clase" interfaz que sera una estructura
typedef struct 
{
    algoritmo algoritmo;
}Interfaz;

//Luego "prototiparemos" las funciones que vamos a usar en el .c

Interfaz *NuevaEstrategia();
void ctorInterfaz(Interfaz *);
void dtorInterfaz(Interfaz *);

#endif 
