#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cestrategiaB.h"
#include "Contexto.h"

estrategiaB *nuevaestrategiaB()
{
    return (estrategiaB*)malloc(sizeof(estrategiaB));
}

void algortimoB(void * nombre)
{
    //Imprimimos un mensaje parecido al de C#
    printf("Contexto: Imprimimos los datos pero invertidos:");

    //Creamos un puntero que reserve un espacio para la lista
    char* lista = malloc(sizeof(char[15]));

    //Copiamos la lista que viene parametrizada(nombre) a lista
    strcpy(lista,(char*)nombre);

    //Pero esta lista que recibimos la debemos invertir
    Reverse(lista);
    //Luego liberamos 
    free(lista);

}

void Reverse (char * lista)
{
    char *ptr1, *ptr2;
    ptr1 = lista;
    ptr2 = lista + strlen(lista) - 1;

    char NInver = *ptr2;
    do
    {
        //Si el invertido es diferente de \0
        if (NInver != '\0')
        {
            //Restamos una vez
            ptr2--;
            //Luego imprimimos el caracter encontrado
            printf("%c", NInver);
            //Luego convertimos NInver en la cabeza
            NInver = *ptr2;
        }
        else//Si el caracter es un '\0'
        {
            //Seguimos buscando caracteres
            ptr2--;
        }
        //El ciclo termina cuando ptr2(el final de la cadena) es menor que ptr1(EL inicio de la cadena)
    } while (ptr2 >= ptr1);
    printf("\n");
}

//constructor
void ctorEstrategiaB(estrategiaB *this)
{
    //Lo enviamos al constructor del interfaz
    ctorInterfaz((Interfaz*)this);

    //Luego le enviamos la funcion algoritmo B al dato algoritmo que es un tipo de dato algortimo que creamos en el interfaz
    this->estratB.algoritmo =  algortimoB;
}
//destructor
void dtorEstrategiaB(estrategiaB *this)
{
    dtorInterfaz((Interfaz*)this);
}