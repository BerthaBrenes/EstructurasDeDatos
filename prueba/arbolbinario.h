#ifndef TEC_EC_ARBOLBINARIO_H
#define TEC_EC_ARBOLBINARIO_H


#include "NodoArbol.h"

class ArbolBInario {
public:
    ArbolBInario ();
    ArbolBInario1 (int raiz);
    ~ArbolBInario2();

    void Anadir (int valor);
    void Eliminar (int valor);
    void Eliminar (NodoArbol *raiz , int valor);
    void Imprimir ();
    int getLargo ();
    void destruirNodo (NodoArbol *nodo);

private:
    void Anadir1 (NodoArbol *raiz , int valor);
    void Imprimir1 (NodoArbol *raiz,int n);

    NodoArbol *Head;
    int largo;
};


#endif //TEC_EC_ARBOLBINARIO_H
