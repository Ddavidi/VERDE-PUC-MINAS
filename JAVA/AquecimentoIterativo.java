/*
   ==UserScript==
 @name         LAB01Q01 - Aquecimento Iterativo
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Aquecimento Iterativo
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class AquecimentoIterativo {

    public static void contarMaiusculas(String entrada){
        int tamanho = entrada.length();
        int coutMaiusculas = 0;

        for(int i=0; i<tamanho; i++){
            if (entrada.charAt(i) >= 65 && entrada.charAt(i) <= 90)
                coutMaiusculas++;
        }

        System.out.println(coutMaiusculas);

    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String entrada = scan.nextLine();
        
        while (!entrada.equals("FIM")) {
            contarMaiusculas(entrada);
            entrada = scan.nextLine();
        }

        scan.close();
    }
}