#include "node.h"
#include <clocale>
#include <iostream>
using namespace std;
//C.defecto
Node::Node() {
    data = NULL;
    left = NULL;
    right = NULL;
    head = NULL;

}
// C por parámetro
Node::Node(int valor) {
    data = valor;
    left = NULL;
    right = NULL;
    head = NULL;

}

int Node::getvalue(){
    return data;
}

void Node::print(){
    cout << data <<endl;
}
void Node::setValue(int value){
    data = value;
}
Node* Node::getleft(){
    return left;
}
Node* Node::getright(){
    return right;
}
Node* Node::gethead(){
    return head;
}
void Node::sethead(Node *nodo){
    head = nodo;
}
void Node::setLeft(Node *nodo){
    left = nodo;
}
void Node::setRight(Node *nodo){
    right = nodo;
}

Node::~Node(){}


