/*
   ==UserScript==
 @name         Par ou Impar
 @namespace    https://github.com/Ddavidi/VERDE-PUC-MINAS
 @description  VERDE PUC MINAS - Par ou Impar
 @author       @ddavidi_
   ==/UserScript==
*/

import java.util.Scanner;

public class ParOuImpar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int number = scanner.nextInt();

        while(number!=0) {
            if (number%2==0)
                System.out.println('P');
            else 
                System.out.println('I');

            number = scanner.nextInt();
        }

        scanner.close();  
    }
}