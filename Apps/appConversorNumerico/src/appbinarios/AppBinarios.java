/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package appbinarios;

import java.util.Scanner;

/**
 *
 * @author alfredo
 */
public class AppBinarios {

    /**
     * @param args the command line arguments
     */
    
    public static int[] aBinario(int n){
        int c = n;
        int[] arr = new int[32];
        int i = arr.length-1;
        while(c > 0 && c < 128){
            arr[i--] = c%2;
            c = c/2;
        }
        return arr;
    }
    
    public static void aBinarioI(int n, int [] bin, int i){
        while(n > 0){
            bin[i--] = n%2;
            n /= 2;
        }
    }
    
    public static void aBinarioR(int n, int [] bin, int i){
        if(n > 0){
            bin[i--] = n%2;
            aBinarioR(n/2, bin, i);
        }
    }
    
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        char opc;
        boolean bandera = true;
        int n;
        int [] vec = new int [32];
        
        while(bandera){
            opc = Menu.Opciones();
            switch(opc){
                case '1':
                    System.out.print("Ingrese un numero: ");
                    n = scanner.nextInt();
                    aBinarioR(n, vec, 31);
                    System.out.print(n + " en binario es " );
                    for(int i = 0; i < vec.length; i++){
                        System.out.print(vec[i]);
                    }
                    System.out.println("");
                    break;
                case '2':
                    System.out.print("Ingrese un numero: ");
                    n = scanner.nextInt();
                    aBinarioI(n, vec, 31);
                    System.out.print(n + " en binario es " );
                    for(int i = 0; i < vec.length; i++){
                        System.out.print(vec[i]);
                    }
                    System.out.println("");
                    break;
                case '3':
                    System.out.print("Ingrese un numero: ");
                    n = scanner.nextInt();
                    vec = aBinario(n);
                    System.out.print(n + " en binario es " );
                    for(int i = 0; i < vec.length; i++){
                        System.out.print(vec[i]);
                    }
                    System.out.println("");
                    break;
                case '4':
                    bandera = false;
                    break;
                default:
                    System.out.println("\n\u001B[31mOpción inválida, intente de nuevo");
                    break;
            }
        
        
        
        }
        
        
        
    }
    
}
