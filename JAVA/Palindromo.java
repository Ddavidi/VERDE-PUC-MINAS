import java.util.Scanner;

public class Palindromo {

    public class void classificarPalindromo(String entrada[]){
        int tamanho = entrada.lenght();
        boolean flag = true;

        for(int i=0; i<=tamanho/2; i++){
            if(entrada.charAt(i) != entrada.charAt(tamanho-1-i)){
                flag = false;
                i = tamanho;
            }
        }

        if(flag)
            System.out.println("SIM");
        else
            System.out.println("NAO");
    }

    public static void main(String[] args){
        String entrada;

        Scanner scan = new Scanner(System.in);

        entrada = scan.nextLine();

        while(entrada.equals(anObject:"FIM")) {
            classificarPalindromo(entrada);
            entrada = scan.nextLine();
        }
        scan.close();
    } 
}