#include <iostream>
#include <stdio.h>
#include <conio.h>
/*
[] Declarar las variables enteras(int) "valorinicial" y "valorfinal"
[] Pedir a el usuario que ingrese un valor inicial y un valor final
[] Hacer un if para que cuando se ingrese un rango incorrecto se muestre un mensaje informativo sobre ello
[] Verificar si hay numeros impares con un booleano
[] Hacer un for que imprima todos los numero impares dentro de el rango ya ingresado
[] En caso de que no haya numeros impares hacer un if para mostrar un mensaje imformativo
*/
int main() {
    int valorinicial;
    int valorfinal; //declaro las dos variables

    printf ("Ingrese un valor inicial ");
    scanf ("%i",&valorinicial);
    printf ("Ahora ingrese un valor final ");
    scanf ("%i",&valorfinal); //pido a el usuario que las ingrese


        if (valorinicial >= valorfinal){
        printf("El valor inicial debe ser menos que el valor final, reinicie el programa e intente otra vez.\n");
        } // muestra que es incorrecto el rango

        bool impares = false; // se inicializan impares como falso para verificar si hay impares
        printf("Los numeros impares en el rango de son:\n");
        for (int i = valorinicial; i <= valorfinal; ++i){
            if (i % 2 != 0){ // si i=0 significa que no va a haber ningun numero impar
                printf ("%i\n",i); i

                impares = true; //se marca que hay aunque sea un numero impar
            }
        }

        if (!impares){
            printf("No esisten valores impares dentro de el rango de","%i",&valorinicial, "y", "%i",&valorfinal);
        }



return 0;
}


