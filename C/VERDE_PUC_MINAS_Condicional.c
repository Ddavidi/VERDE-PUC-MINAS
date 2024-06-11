/*
   ==UserScript==
 @name         Condicional
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Condicional
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>

int main (void) {
    int A, B;

    // leio os dois valores
    scanf("%d %d", &A, &B);

    // exibe o maior valor
    if(A>B)
        printf("%d\n", A);
    else
        printf("%d\n", B);

    return 0;
}
