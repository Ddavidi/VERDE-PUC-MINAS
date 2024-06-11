/*
   ==UserScript==
 @name         Modularização
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Modularização
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>

void ordemCrescente(int A, int B, int C){
    int aux;

    // logica para colocar em ordem crescente os valores
    if(A>B){
        aux = A;
        A = B;
        B = aux;
    }
    if(A>C){
        aux = A;
        A = C;
        C = aux;
    }
    if(B>C){
        aux = B;
        B = C;
        C = aux;
    }

    // exibo o resultado final
    printf("%d %d %d\n", A, B, C);
}

int main(void) {

    int N, A, B, C;

    // leio o valor de N (quantidade de conjuntos de 3 valores que sera verificados)
    scanf("%d", &N);

    // leio os valores dos N conjuntos
    for (int i=0; i<N; i++){
        scanf("%d %d %d", &A, &B, &C);

        // chamo o procedimento
        ordemCrescente(A, B, C);
    }

    return 0;
}
