/*
   ==UserScript==
 @name         LAB02Q02 - Sequencia Espelho
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - LAB02Q02 - Sequencia Espelho
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class SequenciaEspelho {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int entrada1 = scan.nextInt();
        int entrada2 = scan.nextInt();     
        int menor = Math.min(entrada1, entrada2);
        int maior = Math.max(entrada2, menor);

        StringBuilder sequencia = new StringBuilder();

        for(int i=menor; i<=maior; i++) {
            sequencia.append(i);
        }
        
        System.out.print(sequencia);
        System.out.println(sequencia.reverse());
        
        scan.close();
    }
}
