/*
   ==UserScript==
 @name         LAB01Q04 - Aquecimento Recursivo em C
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Aquecimento Recursivo em C
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>
#include <string.h>

int contarMaiusculas(char entrada[], int count, int i) {
    if(entrada[i] == '\0') {
        return count;
    }

    if(entrada[i] >= 65 && entrada[i] <= 90) {
        count++;
    }

    return contarMaiusculas(entrada, count, ++i) ;
}

int main (void) {
    char entrada[500];

    fgets(entrada, sizeof(entrada), stdin);

    while(strcmp(entrada, "FIM\n") != 0) {
        printf("%d\n", contarMaiusculas(entrada, 0, 0));
        fgets(entrada, sizeof(entrada), stdin);
    }

    return 0;
}