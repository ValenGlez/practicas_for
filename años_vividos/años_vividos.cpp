#include <iostream>
#include <conio.h>
#include <stdio.h>
/*
[]Declarar la variable entera de edad
[]Pedir al usuario que ingrese su edad
[]Mostrar una lista de los años vividos con un for
[]Declarar dos nuevas vairables: "aniospares" y "aniosimpares"
[]Hacer un for con un if que verifique los años impares y los pares para despues mostrar cuantos años fueron años pares y cuantos impares
*/
using namespace std;
int main (){

int edad;

printf ("Ingrese su edad ");
scanf ("%i",&edad);

    printf("Los anios que viviste fueron: \n");
    for (int i= 1; i <= edad; ++i){
        printf ("%i\n", i);
    }


    int aniospares = 0;
    int aniosimpares = 0;
    for (int i= 1; i <= edad ; ++i){
        if (i % 2 == 0){
            aniospares++;
        }
        else {
            aniosimpares++;
        }
    }

    printf ("Viviste %i anios pares y %i anios impares.\n", aniospares, aniosimpares);



return 0;
}
