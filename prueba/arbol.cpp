#include "arbol.h"
#include <clocale>
#include <iostream>

using namespace std;
// C. defecto
Arbol::Arbol() {
    head = nullptr;
    largo = 0;
}
Arbol::Arbol(int root){
    head = new Node(root);
    largo =1;
}
void Arbol::Add()
