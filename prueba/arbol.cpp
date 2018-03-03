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
    if(value > root->getvalue()){
        if(root->getright() != nullptr){
            Add(root->getright(),value);
        }else{
            Node *n = new Node(value);
            root->setRight(n);
            n->sethead(root);
            largo++;
            cout<<"entre aqui y por tanto escribi en derecha"<<endl;
        }
    }if(value < root->getvalue()){
        if(root->getleft() != nullptr){
            Add(root->getleft(),value);
        }else{
            largo++;
            Node *n = new Node(value);
            root->setLeft(n);
            n->sethead(root);
            cout<<"entre aqui y por tanto escribi en izquierda"<<endl;
        }
    }
    else{

        cout<<"el valor ya existe"<<endl;
    }
}
void Arbol::Print(){
    int result = 0;
    cout<<head->getvalue()<<endl;
    Print(head, result);
}
void Arbol::Print(Node *root, int ant){
    if(root != nullptr){

        if(root->getleft() != nullptr && root->getright() != nullptr){
            cout<<root->getleft()->getvalue()<<","<<root->getright()->getvalue()<<endl;
            Print(root->getleft(), root->getleft()->getvalue());
            Print(root->getright(),root->getright()->getvalue());
        }else{
            if(root->getleft() == nullptr && root->getright() != nullptr){
                Print(root->getright(), root->getvalue());
            }if(root->getright() == nullptr && root->getleft() != nullptr){
                Print(root->getleft(),root->getvalue());
            }else{
                if(ant != root->getvalue()){
                    cout<<root->getvalue()<<endl;
                }

            }
        }
    }
}
Arbol::~Arbol(){

}
