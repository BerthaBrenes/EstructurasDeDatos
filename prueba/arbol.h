#ifndef ARBOL_H
#define ARBOL_H
#include "node.h"
#include <string>

class Arbol
{
public:
    Arbol();
    Arbol(int root);
    ~Arbol();
    void Add(int value);
    void Delete(int value);
    void Print();
    int getLargo();
    void destruirNodo(Node *nodo);
private:
    void Add(Node *root, int value);
    void Print(Node *root);
    void Delete(Node *root, int value);
    Node *head = nullptr;
    int largo;
};

#endif // ARBOL_H
