/*
   ==UserScript==
 @name         LAB01Q03 - Aquecimento Iterativo
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Aquecimento Iterativo
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>
#include <string.h>


void contarMaiusculas(char entrada[]) {
    int tamanho = strlen(entrada);
    int coutMaiusculas = 0;

    for(int i=0; i<tamanho; i++) {
        if(entrada[i] >= 65 && entrada[i] <= 90)
            coutMaiusculas++;
    }

    printf("%d\n", coutMaiusculas);
}

int main (void) {
    char entrada[500];

    fgets(entrada, sizeof(entrada), stdin);

    while(strcmp(entrada, "FIM\n") != 0) {
        contarMaiusculas(entrada);
        fgets(entrada, sizeof(entrada), stdin);
    }

    return 0;
}