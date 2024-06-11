/*
   ==UserScript==
 @name         Par ou Impar
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Par ou Impar
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>

int main (void) {

    int valor;

    // enquanto o valor digitado nao for 0 o looping ira continuar
    while(valor != 0){
        scanf("%d", &valor);

        // encerro o codigo caso o valor seja 0
        if(valor == 0)
            printf("\n");

        // descubro se o valor é impar ou par
        else if (valor % 2 == 0)
            printf("P\n");
        else
            printf("I\n");
    }

    return 0;
}
