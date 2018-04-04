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
public class ListaCir<T extends Comparable<T>> implements Listas<T>{

    protected NodoCir<T> head;

    private int length;

    public ListaCir() {
        this.head = null;
        this.length = 0;
    }

    /**
     * Agrega un elemento(n) a la lista en la cabeza si es el primero y en el
     * final si es mayor a 1
     *
     * @param n
     */
    @Override
    public void Insertar(T n) {
        NodoCir<T> nuevo = new NodoCir<>(n);
        if (length == 0) {//si la lista es vacia
            this.head = nuevo;
            nuevo.SetNext(head);
            nuevo.SetPrev(head);
            length += 1;
        } else {// si la lista contiene elementos
            length += 1;
            NodoCir<T> temp = this.head;
            while (temp.GetNext() != head) {
                temp = temp.GetNext();
            }
            temp.SetNext(nuevo);
            this.head.SetPrev(nuevo);
            nuevo.SetPrev(temp);
            nuevo.SetNext(head);
        }
    }

    /**
     * Retorna el largo de la lista
     *
     * @return
     */
    @Override
    public int Largo() {
        return this.length;
    }

    /**
     * Esta clase a buscar un elemento (buscado) y va a retornar el elemento
     *
     * @param buscado
     * @return
     */
    public NodoCir<T> Buscar(T buscado) {
        NodoCir<T> actual = this.head;
        if (this.length != 0) {
            while (actual.GetNext() != head) {
                if (actual.GetDato().compareTo(buscado) == 0) {
                    return actual;

                } else {
                    actual = actual.GetNext();
                }
            }
            if (actual.GetDato().compareTo(buscado) == 0) {
                System.out.print(actual);
                return actual;
            }
            return null;
        } else {
            System.out.print("no hay elementos que buscar");
            return null;
        }
    }

    /**
     * Esta funcion borra el elemento(buscado que yo le indique)
     *
     * @param buscado
     */
    @Override
    public void Eliminar(T buscado) {
        NodoCir<T> actual = this.head;
        if (this.head.GetDato().compareTo(buscado) == 0) {
            EliminarPrimero();
            System.out.println("hey soy el primero");
        } else {
            while (actual.GetNext() != this.head) {
                if (actual.GetDato().compareTo(buscado) == 0) {
                    System.out.println("entre aca");
                    actual.GetPrev().SetNext(actual.GetNext());
                    actual.GetNext().SetPrev(actual.GetPrev());
                    this.length -= 1;
                    break;
                } else {
                    actual = actual.GetNext();
                }
            }
            if (actual.GetNext() == head) {
                if (actual.GetDato().compareTo(buscado) == 0) {
                    System.out.println("por alguna puta razon entro aqui");
                    EliminarUltimo();
                }

            }
        }
    }

    public void EliminarPrimero() {
        if (this.length > 1) {
            this.head.GetNext().SetPrev(this.head.GetPrev());
            this.head.GetPrev().SetNext(this.head.GetNext());
            this.head = this.head.GetNext();
            this.length -= 1;

        } else if (this.length == 1) {
            this.head = null;
            this.length -= 1;
        }
    }

    public void EliminarUltimo() {
        if (this.length > 1) {
            NodoCir<T> iterador = this.head;
            while (iterador.GetNext() != head) {
                iterador = iterador.GetNext();
            }
            iterador.GetNext().SetPrev(iterador.GetPrev());
            iterador.GetPrev().SetNext(iterador.GetNext());
            this.length -= 1;
        } else if (this.length == 1) {
            this.head = null;
            this.length -= 1;
        }
    }

    /**
     *
     * funcion print recorre la lista e imprime el dato
     */
    @Override
    public void Imprimir() {
        NodoCir<T> temp = head;
        System.out.println("contenido de la lista");
        while (temp.GetNext() != head) {
            System.out.println("[" + temp.GetDato() + "]");
            temp = temp.GetNext();
        }
        System.out.println("[" + temp.GetDato() + "]");
    }
    @Override
     public boolean Existe(T buscado) {
        NodoCir<T> actual = this.head;
        while (actual.GetNext() != this.head) {
            if (actual.GetDato().compareTo(buscado) == 0) {
                System.out.println("true");
                return true;
            } else {
                actual = actual.GetNext();
            }
        }
        System.out.println("false");
        return false;        
    }
    @Override
     public T Iterador(int i) {
        if (i > length) {
            return null;
        } else {
            int conteo = 0;
            NodoCir<T> actual = this.head;
            while (conteo < i) {
                actual = actual.GetNext();
                conteo++;
            }
            System.out.println(actual.GetDato());
            return actual.GetDato();
        }
    }
}
