/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication15;

/**
 *
 * @author berta
 */
public class JavaApplication15 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Circular Doubly Linked List");
        long inicio1 = System.nanoTime();
        ListaDo dc = new ListaDo();
        dc.Insertar(1);
        dc.Insertar(2);
        dc.Insertar(3);
        dc.Imprimir();
        dc.Eliminar(2);
        dc.Imprimir();
        long finali1 = System.nanoTime();
        double dif = (double)(finali1 - inicio1)*1.0e-9;
        System.out.print("El tiempo es  "+  dif);
        System.out.println(".......................");

        //Pruebas Double Linked
        System.out.println("Doubly Linked List");
        long inicio2 = System.nanoTime();
        ListaDo dl = new ListaDo();
        dl.Insertar(1);
        dl.Insertar(2);
        dl.Insertar(3);
        dc.Imprimir();
        dl.EliminarUltim();
        dc.Imprimir();
        dl.Existe(0);
        dc.Imprimir();
        long finali2 = System.nanoTime();
        double dif2 = (double)(inicio2 - finali2)*1.0e-9;
        System.out.print("El tiempo es  "+  dif);
        System.out.println(".......................");

        //Pruebas Simple Linked
        System.out.println("Simply Linked List");
        long inicio3 = System.nanoTime();
        Lista sl = new Lista();
        sl.Insertar(1);
        sl.Insertar(2);
        sl.Insertar(3);
        sl.Imprimir();
        sl.EliminarUltimo();
        sl.Imprimir();
        long finali3 = System.nanoTime();
        double dif3 = (double)(finali3 - inicio3)*1.0e-9;
        System.out.print("El tiempo es  "+  dif);
        System.out.println(".......................");

    }
    
}
