/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cola;

/**
 *
 * @author berta
 */
public class Cola<T> {
    protected Nodo<T> head;
    protected Nodo<T> tail;    
    private int length;
    
    public Cola() {
        head = null;
        tail = null;
        length = 0;        
    }

    /**
     * Retorna el largo de la lista
     *
     * @return
     */
    //@Override
    public int Largo() {
        return length;
    }

    

    /**
     * funcion print recorre la lista e imprime el dato
     */
    //@Override
    public void Imprimir() {
        Nodo<T> temp = head;
        System.out.println("contenido de la lista");
        while (temp != null) {
            System.out.println("[" + temp.getDato() + "]");
            temp = temp.getNext();
        }
    }
    /**
     * Elimina el primer elemento de la lista
     */
    public void dequeque(){
        Nodo<T> aux;
        if(length > 1){
            aux = head;
            head = head.getNext();
            aux = null;
            length -=1;
        }else{
            if(length ==1){
                head = null;
                tail = head;
                length -=1;
            }else{
                System.out.println("No hay nada que borrar");
            }
        }
    }
   /**
     * funcion add recibe el parametro n que se va a insertar en la lista
     *
     * @param n
     */
    //@Override
    public void enqueque(T n) {
        Nodo<T> nuevo = new Nodo<>(n);
        if (length == 0) {//si la lista es vacia
            head = nuevo;
            tail = head;
            length += 1;
        } else {// si la lista contiene elementos
            tail.setNext(nuevo);            
            tail = nuevo;
            length += 1;
        }
    }

    /**
     * Esta clase a buscar un elemento (buscado) y va a retornar el elemento
     *
     * @param buscado
     * @return
     */
    public Nodo<T> Buscar(T buscado) {
        Nodo<T> actual = this.head;
        while (actual != null) {
            if (actual.getDato() == buscado) {
                return actual;
            } else {
                actual = actual.getNext();
            }
        }
        return null;
        
    }

    /**
     * Esta clase va a buscar el elemento (buscado) que yo le pida y va a
     * devolver True si existe y False si no existe
     *
     * @param buscado
     * @return
     */
    //@Override
    public boolean Existe(T buscado) {
        Nodo<T> actual = this.head;
        while (actual != null) {
            if (actual.getDato() == buscado) {
                return true;
            } else {
                actual = actual.getNext();
            }
        }
        return false;        
    }
}
