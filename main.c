#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//"Heredamos" todos los .h que son "clases"
#include "cestrategiaA.h"
#include "cestrategiaB.h"
#include "Contexto.h"
#include "Interfaz.h"

//Ahora creamos el main, int para contro de errores
int main (void)
{

    Interfaz* enmain = NuevaEstrategia();
    ctorInterfaz(enmain);

    estrategiaA* EstraA = nuevaestrategiaA();
    ctorEstrategiaA(EstraA);

    estrategiaB* EstraB = nuevaestrategiaB();
    ctorEstrategiaB(EstraB);

    Contexto* EnmainContexto = nuevocontexto();
    ctorContexto(EnmainContexto, EstraA);

    printf("Arreglo normal\n");
    Dosome(EnmainContexto);
    printf("\n");

    printf("Arreglo Inverso\n");
    SeteoEstrategia(EnmainContexto, EstraB);
    Dosome(EnmainContexto);

    dtorContexto(EnmainContexto);
    free(EstraA);
    free(EstraB);
    free(EnmainContexto);
    free(enmain);
    
    return 0;
}