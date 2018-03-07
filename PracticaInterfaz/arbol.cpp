#include "arbol.h"
#include <clocale>
#include <iostream>
#include <string>

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
void Arbol::Add(int value){
    if(head == NULL){
        head = new Node(value);
        largo =1;
        cout<<"he creado al nodo"<<endl;
    }
    else{
        Add(head,value);
    }
}
void Arbol::Add(Node *root, int value){
    //si el valor es mayor que la raiz
    if(value > root->getvalue()){
        //Existe un nodo derecho?
        if(root->getright() != nullptr){
            cout<<"soy menor y el hijo es diferente de nulo"<<endl;
            //llamada recursiva con root de la derech
            Add(root->getright(),value);

        }else{
            //no existe, entonces creo uno nuevo
            Node *n = new Node(value);
            root->setRight(n);
            n->sethead(root);
            largo++;
            cout<<"entre aqui y por tanto escribi en derecha"<< root->getright()->getvalue()<<"mi papa es"<< n->gethead()->getvalue()<<endl;
        }
    //Si el valor es menor a la raiz
    }else if(value < root->getvalue()){
       //si el nodo izquierdo es diferente de 0
        if(root->getleft() != nullptr){
            //llamo a recursion para seguir bajando
            cout<<"soy izq y el hijo es diferen de nulo"<<endl;
            Add(root->getleft(),value);

        // si el nodo izquierda no existe entonces creo un nodo
        }else{
            largo++;
            Node *n = new Node(value);
            root->setLeft(n);
            n->sethead(root);
            cout<<"entre aqui y por tanto escribi en izquierda, estoy en"<< root->getleft()->getvalue()<<"mi papa es"<<n->gethead()->getvalue()<<endl;
        }
    }

}
void Arbol::Print(){
    cout<<head->getvalue()<<endl;
    Print(head);
}
void Arbol::Print(Node *root){
    if(root != nullptr){
        cout<<root->getvalue()<<endl;
        if(root->getleft()!= nullptr){
            Print(root->getleft());
        }
        if(root->getright() != nullptr){
            Print(root->getright());
        }
    }
}
void Arbol::Delete(int value){
    if(head != nullptr){
     Delete(head,value);
    }
}
void Arbol::Delete(Node *root, int value){
    if (root != nullptr){
        //si el valor de la raiz es mayor que el valor
        if(root->getvalue() < value){
            //si el valor del siguiente derecho es igual al valor y no es una hoja
            if(root->getright()->getvalue() == value && !isLeaf(root->getright())){
                //referencia el valor del derecho va a ser el mayor de los menores y elimine
                root->getright()->setValue(highLess());
                Delete(root->getleft(),highLess());
             //is por el contrario el siguiente es valor que quiero y es una hoja puedo eliminarlo y referenciar su siguiente
            }else if(root->getright()->getvalue() == value && isLeaf(root->getright())){
                Node* temp = root->getright();
                root->setRight(nullptr);
                largo--;
                delete temp;

            }else{
                //pasa al siguiente porque no es el que buscaba pero si es mayor que el valor por tanto a la derecha
                Delete(root->getright(),value);
            }

        }
        //El valor que busco es menor a la raiz
        if(root->getvalue() > value){
            //busco que el siguiente nodo sea igual al que busco pero sea diferente de una hoja
            //Para setearla a su menor de los mayores y llamar a recursion con un nuevo valor a eliminar
            if(root->getleft()->getvalue() == value && !isLeaf(root->getleft())){
                root->getleft()->setValue(lessHigh());
                Delete(root->getright(),lessHigh());
            //el siguiente valor es igual al valor y es una hoja
            //por tanto puedo borrarlo y referenciar el siguiente a null
            }else if(root->getleft()->getvalue() == value && isLeaf(root->getleft())){
                Node* temp = root->getleft();
                root->setLeft(nullptr);
                largo--;
                delete temp;
            }else{
                //no es el siguiente asi que puedo seguir
                Delete(root->getleft(), value);
            }

        }
        else{
            if(root->getleft() == nullptr && root->getright() == nullptr){
                Node* temp = root;
                root->gethead()->sethead(nullptr);
                largo--;
                delete temp;

            }else{
                root->setValue(lessHigh());
                Delete(root->getright(),lessHigh());
            }
        }
    }
}
bool Arbol::isLeaf(Node *nodo){
    if(nodo->getleft() == nullptr && nodo->getright()== nullptr){
        return true;
    }else{
        false;
    }
}




int Arbol::lessHigh(){
    lessHigh(head->getright());

}
int Arbol::lessHigh(Node *root){
        while(root->getleft() != nullptr){
            root = root->getleft();
        }
        return root->getvalue();

}
int Arbol::highLess(){
    highLess(head->getleft());
}
int Arbol::highLess(Node *root){
    while(root->getright() != nullptr){
        root = root->getright();
    }
    return root->getvalue();
}

int Arbol::getLargo(){
    return largo;
}
void Arbol::destruirNodo(Node *nodo){
    nodo->~Node();
}

Arbol::~Arbol(){

}
/**
if (root != nullptr){
    if (root-> getvalue() == value){
        if (root->getright() == nullptr && root->getleft() == nullptr) {
            if (root->gethead() ->getvalue() < value){

                root->gethead()->setRight(0);
                delete root;
            }
            else if (root->gethead()->getvalue() > value){

                root->gethead()->setLeft(0);
                delete root;
            }
        }

        else if (root->getright() != nullptr && root->getleft() == nullptr) {
            Node *base = root;
            *root = *root->getright();
            delete base;
        }
        else if (root->getright() == nullptr && root->getleft() != nullptr){
            Node *base = root;
            *root = *root->getleft();
            delete base;
        }
        else if (root->getright() != nullptr && root->getleft() != nullptr){
            Node *comparar = root->getright();
            while (comparar->getleft() != nullptr){
                comparar = comparar->getleft();
            }
            Delete(comparar, comparar->getvalue());
            root->setValue(comparar ->getvalue());

        }
    }

    else if (root->getvalue() > value){
        Delete(root->getleft(),value);
    }
    else if (root-> getvalue() < value){
        Delete(root->getright(),value);
    }

}*/
