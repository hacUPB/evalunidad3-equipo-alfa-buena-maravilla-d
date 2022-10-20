# Descripcion del programa

El programa tiene una funcionalidad que es voltear el texto, en el cual utilizamos poliformismo y herencias

El proyecto cuenta con 5 clase, las cuales son:

1. main
   * main.c

2. Interfaz
   * Interfaz.h
   * Interfaz.c

3. Contexto
   * Contexto.h
   * Contexto.c

4. cestrategiaA 
   * cestrategiaA.h
   * cestrategiaA.c

5. cestrategiaB
   * cestrategiaB.h
   * cestrategiaB.c

## Descripcion de las clases

/*Los .h son para definir estructuras, definir tipos de datos y los objetos que vamos a utilizar en los .c *

/*Los .c son para declarar las funciones y hacer los metodos *

* main.c
   > Entrada del programa donde se instancian los objetos.
   >
   >Contiene las herencias de los .h y el codigo del main.

* Interfaz.h
   > creamos un tipo de dato puntero que sea void*
   >
   >Luego definimos la "clase" interfaz que sera una estructura.
   >
   >Y por ultimo "prototipamos" las funciones que vamos a usar en el .c

* Interfaz.c
   >Hacemos herencia de Interfaz.h
   >"Instanciamos" el interfaz en el .h para utilizar las funciones que prototipamos
   >
   >Creamos una funcion que trae el nombre y no retorna nada. el la que creamos un puntero a una cadena de caracteres, A este puntero le copiamos una cadena de caracteres, luego imprimimos un string y pot ultimo liberamos la memoria.
   >
   >Creamos el constructor. Con el puntero this, accedemos al tipo de dato algoritmo
   Y ahi le damos la direccion del algrotimo vacio
   >
   >Destructor para liberar memoria

* Contexto.h
   >Hacemos herecia de interfaz.h
   >
   >Definimos la "clase" Contexto que sera una estructura.
   >
   >prototipamos las funciones que vamos a usar en el .c

* Contexto.c
   >Hacemos herencia de Contexto.h
   >
   >"Instanciamos" la clase contexto
   >
   >Creamos el constructor, introducirmos al dato estrategia que es un tipo Interfaz*, entramos al nombre de nuestra estructura y almacenamos char 15, creamos la lista y la scaneamos, tomamos los datos que nos pase por consola y le copiamos al nombre, la lista ingresada
   >
   >Creamos el Destructor para liberar memoria
   >
   >Seteamos la estrategia, le damos a esrategia el parametro que entre por el void*estrategia
   >
   >Creamos el metodo DoSomethig, entramos al this, que entra a la estrategia que entra al algoritmo que hayamos enviado al interfaz, y ahi le enviamos el nombre

* cestrategiaA.h
   >Hacemos una herencia del Interfaz.h
   >
   >Definimos la "clase" estrategia A que sera una estructura.
   >
   >prototipamos las funciones que vamos a usar en el .c

* cestrategiaA.c
   >Hacemos herencia de cestrategiaA.h y Contexto.h
   >
   >Primero "Instancio" la estrategia, que es reservando en la el tamaño de estrategia A. Y retornamos un puntero estrategia A
   >
   >Luego vamos a crear un algortimo especifico de la estrategia A, Imprimimos un mensaje, creamos un puntero que reserve un espacio para la lista, copiamos la lista que viene parametrizada(nombre) a lista y luego liberamos.
   >
   >Cramos el constructor, le mandamos el parametro Interfaz con puntero para que construya con el constructor del interfaz,luego le damos al dato algoritmo la funcion algoritmo A
   >
   >Creamos el destructor

* cestrategiaB.h
   >Hacemos una herencia del Interfaz.h
   >
   >Definimos la "clase" estrategia B que sera una estructura.
   >
   >Prototipamos las funciones que vamos a usar en el .c

* cestrategiaB.c
   >Hacemos herencia de cestrategiaB.h y Contexto.h
   >
   >Primero "Instancio" la estrategia, que es reservando en la el tamaño de estrategia B. Y retornamos un puntero estrategia B
   >
   >Luego vamos a crear un algortimo especifico de la estrategia B,Imprimimos un mensaje, creamos un puntero que reserve un espacio para la lista, copiamos la lista que viene parametrizada(nombre) a lista, pero esta lista que recibimos la debemos invertir y luego liberamos
   >
   >Creamos el reverse, en el que se hace un do que si el invertido es diferente de \0, restamos una vez, imprimimos el caracter encontrado y luego convertimos NInver en la cabeza. Si el caracter es un '\0', Seguimos buscando caracteres. El ciclo termina cuando ptr2(el final de la cadena) es menor que ptr1(EL inicio de la cadena)
   >
   >Cramos el constructor, Lo enviamos al constructor del interfaz,Luego le enviamos la funcion algoritmo B al dato algoritmo que es un tipo de dato algortimo que creamos en el interfaz
   >
   >Creamos el destructor


**Equipo:** Juliana Olarte 
		      Mateo Arango  