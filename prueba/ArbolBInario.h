//
// Created by bandres16 on 27/02/18.
//

#ifndef TEC_EC_ARBOLBINARIO_H
#define TEC_EC_ARBOLBINARIO_H


#include "NodoArbol.h"

class ArbolBInario {
public:
    ArbolBInario ();
    ArbolBInario (int raiz);
    ~ArbolBInario();

    void Anadir (int valor);
    void Eliminar (int valor);
    void Eliminar (NodoArbol *raiz , int valor);
    void Imprimir ();
    int getLargo ();
    void destruirNodo (NodoArbol *nodo);

private:
    void Anadir (NodoArbol *raiz , int valor);
    void Imprimir (NodoArbol *raiz,int n);

    NodoArbol *Head;
    int largo;
};


#endif //TEC_EC_ARBOLBINARIO_H
