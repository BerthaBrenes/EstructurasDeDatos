//
// Created by bandres16 on 27/02/18.
//

#include "ArbolBInario.h"
#include <clocale>
#include <iostream>

using namespace std;
// C. defecto
ArbolBInario ::ArbolBInario() {
    Head = nullptr;
    largo = 0;
}
ArbolBInario ::ArbolBInario(int raiz) {
    NodoArbol *Nuevo = new NodoArbol (raiz);
    Head = Nuevo;
    largo = 1;
}

// Añadir un nodo
void ArbolBInario ::Anadir(int valor) {
    Anadir(Head , valor);
    largo++;
}
void ArbolBInario :: Anadir (NodoArbol *raiz , int valor) {

    NodoArbol *Nuevo = new NodoArbol (valor);
    if (!raiz){
        raiz = Nuevo;

    } else {
        if (valor == raiz -> getValor()){
            cout << "Ya existe" << endl;
        }

        if (valor > raiz -> getValor() && raiz -> Derecha == nullptr){
            raiz -> Derecha = Nuevo;
            Nuevo -> Head = raiz;

        } else {
            if (valor < raiz -> getValor() && raiz -> Izquierda == nullptr){
                raiz -> Izquierda = Nuevo;
                Nuevo -> Head = raiz;
            } else {
                if (valor > raiz -> getValor()){
                    Anadir(raiz -> Derecha, valor);
                } else {
                    Anadir(raiz -> Izquierda, valor);
                }
            }

        }

    }

}

void ArbolBInario :: Eliminar(int valor) {
    Eliminar(Head , valor);
}
void ArbolBInario :: Eliminar(NodoArbol *raiz, int valor) {
    if (raiz != nullptr){
        if (raiz -> getValor() == valor){
            if (raiz -> Derecha == nullptr && raiz -> Izquierda == nullptr) {
                if (raiz -> Head -> getValor() < valor){

                    raiz -> Head -> Derecha = NULL;
                    delete raiz;
                }
                else if (raiz -> Head ->getValor() > valor){

                    raiz -> Head -> Izquierda = NULL;
                    delete raiz;
                }
            }

            else if (raiz -> Derecha != nullptr && raiz -> Izquierda == nullptr) {
                NodoArbol *base = raiz;
                *raiz = *raiz -> Derecha;
                delete base;
            }
            else if (raiz -> Derecha == nullptr && raiz -> Izquierda != nullptr){
                NodoArbol *base = raiz;
                *raiz = *raiz -> Izquierda;
                delete base;
            }
            else if (raiz -> Derecha != nullptr && raiz -> Izquierda != nullptr){

                NodoArbol *comparar = raiz -> Derecha;

                while (comparar -> Izquierda != nullptr){
                    comparar = comparar -> Izquierda;
                }


                Eliminar(comparar, comparar-> getValor());
                raiz->setValor(comparar -> getValor());

            }
        }

        else if (raiz -> getValor() > valor){
            Eliminar(raiz -> Izquierda,valor);
        }
        else if (raiz -> getValor() < valor){
            Eliminar(raiz -> Derecha,valor);
        }

    }
}

void ArbolBInario ::Imprimir() {
    if (!Head) {
        cout << "Arbol vacio" << endl;
    } else {

        Imprimir(Head , largo);
    }
}
int ArbolBInario ::getLargo() {
    return largo;
}
void ArbolBInario :: Imprimir(NodoArbol *raiz, int n) {
    if (raiz != nullptr){

        for (int i = 0; i < n ; i++){
            cout << "   ";
        }
        raiz -> Imprimir();

        Imprimir(raiz -> Derecha , n+1);
        Imprimir(raiz -> Izquierda , n-1);

    }
}

