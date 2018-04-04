/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication15;

/**
 *
 * @author berta
 * @param <T> Generic
 */
public class NodoCir<T> {
    private NodoCir<T> next;
    private T valor;
    private NodoCir<T> prev;
    /**
     * constructor por defecto
     */
    public NodoCir(){
        this.next = null;
        this.prev =null; 
    }
    /**
     * para el final el final de la lista
     * @param value
     */ 
    public NodoCir(T value){
        this.valor = value;
        this.next = null;
        this.prev = null;
        
    }

    /**
     * Para cualquier otro momento de la lista
     * @param value
     * @param n next
     * @param p previ
     */
    public NodoCir(T value, NodoCir<T> n, NodoCir<T> p){
        this.next = n;
        this.prev = p;
        this.valor = value;
    }
    public T GetDato() {
        return valor;
    }
    public void SetDato(T value){
        this.valor = value;
    }
    public NodoCir<T> GetNext(){
        return this.next;
    }
    public void SetNext(NodoCir<T> t){
        this.next = t;
    }
    public void SetPrev(NodoCir<T> p){
        this.prev = p;
    }
    public NodoCir<T> GetPrev(){
        return this.prev;
    }
}
