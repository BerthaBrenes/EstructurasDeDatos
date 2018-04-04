/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cola;

import jdk.nashorn.internal.parser.DateParser;

/**
 *
 * @author berta
 */
public class ColaTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        long inicio = System.nanoTime();
        Cola<Integer> pruepila = new Cola();
        pruepila.enqueque(45);
        pruepila.enqueque(75);
        pruepila.enqueque(42);
        pruepila.Imprimir();
        pruepila.dequeque();
        pruepila.Imprimir();
        long finali = System.nanoTime();
        double dif = (double)(finali - inicio)*1.0e-9;
        System.out.print("El tiempo es  "+  dif);
    }

}
