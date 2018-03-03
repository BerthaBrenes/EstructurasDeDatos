//
// Created by bandres16 on 27/02/18.
//

#include "NodoArbol.h"
#include <clocale>
#include <iostream>
using namespace std;
//C.defecto
NodoArbol ::NodoArbol() {
    Valor = NULL;
    Izquierda = NULL;
    Derecha = NULL;
    Head = NULL;

}
// C por parámetro
NodoArbol :: NodoArbol(int valor) {
    Valor = valor;
    Izquierda = NULL;
    Derecha = NULL;
    Head = NULL;

}

int NodoArbol :: getValor() {
    return Valor;
}
void NodoArbol ::setValor(int valor) {
    Valor = valor;
}

void NodoArbol :: Imprimir() {
    cout << Valor <<endl;
}

NodoArbol ::~NodoArbol() {}
