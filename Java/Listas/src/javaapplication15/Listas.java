/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication15;

/**
 *
 * @author berta
 * @param <T>
 */
public interface Listas<T> {
    public void Eliminar(T buscado);
    public T Iterador(int i);
    public int Largo();
    public void Insertar(T n);
    public void Imprimir();
    public boolean Existe(T buscado);
}

