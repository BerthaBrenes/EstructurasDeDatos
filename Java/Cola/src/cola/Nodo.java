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
public class Nodo<T> {
    private Nodo<T> next;
    private T valor;
    /**
     * constructor por defecto
     */
    public Nodo(){
        this.next = null;
    }
    /**
     * para el final el final de la lista
     * @param value
     */ 
    public Nodo(T value){
        this.valor = value;
        this.next = null;
    }

    /**
     * Para cualquier otro momento de la lista
     * @param value
     * @param n
     */
    public Nodo(T value, Nodo<T> n){
        this.next = n;
        this.valor = value;
    }
    public T getDato() {
        return valor;
    }
    public void setDato(T value){
        this.valor = value;
    }
    public Nodo<T> getNext(){
        return this.next;
    }
    public void setNext(Nodo<T> t){
        this.next = t;
    }
}
