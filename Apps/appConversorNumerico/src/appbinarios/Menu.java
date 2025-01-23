/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package appbinarios;

import java.util.Scanner;

/**
 *
 * @author Guest
 */
public class Menu {
    
    public static char Opciones(){
        
        System.out.println("\n\t\u001B[31m MENU");
        System.out.println("\u001B[34m1) \u001B[30mBinario con recursividad");
        System.out.println("\u001B[34m2) \u001B[30mBinario con iteracion");
        System.out.println("\u001B[34m3) \u001B[30mBinario con metodo propio");
        System.out.println("\u001B[34m4) \u001B[30mSalir");
        System.out.print("\n\u001B[34mTu Opcion: ");
        
        Scanner teclado = new Scanner(System.in);
        char opcion = teclado.next().charAt(0);
        return opcion;
    }
    
}
