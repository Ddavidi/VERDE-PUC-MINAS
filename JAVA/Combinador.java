/*
   ==UserScript==
 @name         LAB02Q01 - Combinador
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - LAB02Q01 - Combinador
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class Combinador {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String string1 = scan.nextLine();
        String string2 = scan.nextLine();

        if(string1.length() >= string2.length()) {
            for(int i=0; i<string1.length(); i++){
                System.out.print(string1.charAt(i));
                System.out.print(string2.charAt(i));

                if(string2.length() < i) {
                    for(int j = string2.length(); j<string1.length(); j++){
                        System.out.print(string1.charAt(j));
                        i = j;
                    }
                }
            }
        }

        else {
            for(int i=0; i<string2.length(); i++){
                System.out.print(string1.charAt(i));
                System.out.print(string2.charAt(i));

                if(string1.length() < i) {
                    for(int j = string1.length(); j<string2.length(); j++){
                        System.out.print(string2.charAt(j));
                        i = j;
                    }
                }
            }
        }

        scan.close();
    }
}
