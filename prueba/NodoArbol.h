//
// Created by bandres16 on 27/02/18.
//

#ifndef TEC_EC_NODOARBOL_H
#define TEC_EC_NODOARBOL_H


class NodoArbol {
public:
    NodoArbol ();
    NodoArbol (int valor);
    ~NodoArbol();

    NodoArbol *Izquierda;
    NodoArbol *Derecha;
    NodoArbol *Head;

    int Valor;
    void Imprimir ();
    int getValor();
    void setValor (int valor);

};


#endif //TEC_EC_NODOARBOL_H
