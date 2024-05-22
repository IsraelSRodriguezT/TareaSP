#include <stdio.h> // Archivo de encabezado.
 int main (){ //Punto de entrada especial del programa
 //Dentro de este lenguaje de programación encontramos distintos tipos de datos para almacenar distintos tipos de valores.
 int variable1; //int sirve especificar que en esta variable se almacenan números enteros.
 float variable2; //float sirve para especificar que en esta variable se almacenan números con decimmales.
 char variable3; //char sirve para especificar que en esta variable se almacena caracteres individuales.
// printf es una función utilizada frecuentemente, debido a que nos permite escribir información en pantalla como resultados, mensajes, variables, datos y muchas más cosas.
// scanf es una función predefinida que permite leer la entrada de usuario desde el teclado.
 printf("Hola, bienvenido, ingresa por favor un numero entero\n");
 // En este primer printf al tratarse de un mensaje simple pues se estructura todo dentro de las comillas, para que así se muestre en pantalla.
 scanf("%d", &variable1);
 //Para estructurar esta función debemos añadirle entre comillas el tipo de variable a leer, seguido de una coma para añadir & con el nombre de la variable, para así indicar en que variable queremos que se guarde un valor.
 // En este caso añadimos "%d" debido a que la variable que buscamos que se lea tiene que ser entera.
 printf ("Ingresaste como valor: %d\n", variable1);
 // En este caso como buscamos mostrar el valor de la variable1 en pantalla, pues toca añadir entre las comilla "%d" ya que este es un formato definido para los numeros enteros.  
 printf("Ahora ingresa un valor en decimales\n");
 // Al tratarse de mensaje simple se estructura nomas entre comillas. 
 scanf("%f", &variable2);
// En este caso añadimos "%f" debido a que la variable que buscamos que se lea tiene que incluir decimales.
 printf ("Ingresaste como valor: %f\n", variable2);
 // Al tratarse de mostrar el valor de variable2 se añade "%f", debido a que este es el formato a implementar para poder escribir un valor con decimales.  
 printf ("Por ultimo ingresa un caracter , como lo puede ser la inicial de tu primer nombre\n");
 // Al tratarse de mensaje simple se estructura nomas entre comillas.
 scanf(" %c", &variable3);
 // En este caso añadimos "%c" debido a que la variable que buscamos que se lea tiene que ser una caracter.
 // Y en este caso le agregamos un espacio al inicio en " %c", debido que al momento de ingresar el caracter y presionar enter, se añade un caracter de nueva linea.
 // Al agregar un espacio al inicio dentro de las comillas, va a permitir ignorar cualquier caracter de espacio en blanco.
 printf ("Ingresaste como caracter: %c\n", variable3);
 // Al tratarse de mostrar el valor de variable3 se añade "%c", debido a que este es el formato a implementar para poder escribir un caracter.
 printf ("Fin del programa");
 // Al tratarse de mensaje simple se estructura nomas entre comillas.
return 0; //Punto de salida del programa que indica que se ha ejecutado correctamente
} //Indica el final de un bloque de codigo