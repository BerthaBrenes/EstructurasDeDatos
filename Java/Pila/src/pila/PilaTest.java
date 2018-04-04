/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pila;

/**
 *
 * @author berta
 */
public class PilaTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        long inicio = System.nanoTime();
        Pila<Integer> pruepila = new Pila();
        pruepila.push(45);
        pruepila.push(85);
        pruepila.push(95);
        pruepila.Imprimir();
        pruepila.pop();
        pruepila.Imprimir();
        long finali = System.nanoTime();
        double dif = (double)(finali - inicio)*1.0e-9;
        System.out.print("El tiempo es  "+  dif);
    }
    
}
