/*
   ==UserScript==
 @name         Concatenar Vetores
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Concatenar Vetores
 @author       @ddavidi_
   ==/UserScript==
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int N, M;

    // leio as variaveis N e M (referentes ao tamanho do vetorN e vetorM)
    scanf("%d %d", &N, &M);

    // uso locacao dinamica pra definir o tamanho do vetorN  e vetorM
    int *vetorN = (int *)malloc(N * sizeof(int));
    int *vetorM = (int *)malloc(M * sizeof(int));

    // verifico se a locacao dinamica funcionou normalmente
    if (vetorN == NULL || vetorM == NULL) {
        printf("Locacao dinamica falhou\n");
        return 1;
    }

    // preencho o vetorN
    for(int i=0; i<N; i++){
        scanf("%d", &vetorN[i]);
    }

    // preencho o vetorM
    for(int i=0; i<M; i++){
        scanf("%d", &vetorM[i]);
    }

    // uso locacao dinamica pra definir o tamanho do vetorC
    int *vetorC = (int *)malloc((N+M) * sizeof(int));

    // verifico se a locacao dinamica funcionou normalmente
    if (vetorC == NULL) {
        printf("Locacao dinamica falhou\n");
        return 1;
    }

    // preencho o vetorC copiando o vetorN
    for(int i = 0; i<N; i++){
        vetorC[i] = vetorN[i];
    }

    // preencho o resto do vetor copiando o vetorM (vetorC[N + i == vetorM[0])
    for(int i = 0; i<M; i++){
        vetorC[N + i] = vetorM[i];
    }

    // mostra os resultado do vetorN
    for(int i = 0; i<N; i++){
        printf("%d ", vetorN[i]);
    }

    printf("\n");

    // mostra os resultado do vetorM
    for(int i = 0; i<M; i++){
        printf("%d ", vetorM[i]);
    }

    printf("\n");

    // mostra os resultado do vetorC
    for(int i = 0; i<N+M; i++){
        printf("%d ", vetorC[i]);
    }

    printf("\n");

    // libero as memorias dos vetores utilizados no exercicio
    free(vetorN);
    free(vetorM);
    free(vetorC);

    return 0;
}
