/*
   ==UserScript==
 @name         LAB01Q02 - Aquecimento Recursivo
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Aquecimento Recursivo
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class AquecimentoRecursivo {

    public static int contarMaiusculas(String entrada, int i, int count){
        if(i == entrada.length()) {
            return count;
        }

        else if(entrada.charAt(i) >= 65 && entrada.charAt(i) <=90){
            count++;
        }

        return contarMaiusculas(entrada, ++i, count);
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String entrada;

        entrada = scan.nextLine();

        while(!entrada.equals("FIM")){   
            System.out.println(contarMaiusculas(entrada, 0, 0));
            entrada = scan.nextLine(); 
        }
            
        scan.close();
    }
}