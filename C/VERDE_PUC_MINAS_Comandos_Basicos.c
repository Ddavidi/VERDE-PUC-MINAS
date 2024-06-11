/*
   ==UserScript==
 @name         Comandos Básicos
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Comandos Básicos
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>

int main (void) {

    int num, dezenas, centenas, unidade;

    // leio o número inteiro com três dígitos (no formato CDU)
    scanf("%d", &num);

    // descubro os valores da centena, dezena e unidade
    centenas = num / 100;
    dezenas = (num / 10) % 10;
    unidade = num % 10;

    // mostro o valor do numero Invertido
    printf("%d%d%d\n", unidade, dezenas, centenas);

    return 0;
}
