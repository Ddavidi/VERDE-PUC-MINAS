/*
   ==UserScript==
 @name         TP01Q03 - Ciframento de Cesar
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - TP01Q03 - Ciframento de Cesar
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class CiframentoDeCesar {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String entrada = scan.nextLine();

        while(!entrada.equals("FIM")) {
            for(int i=0; i<entrada.length(); i++) {
                System.out.print((entrada.charAt(i) + 3));
            }

            System.out.println();
            entrada = scan.nextLine();
        }

        scan.close();
    }
}
