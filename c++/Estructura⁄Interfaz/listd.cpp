#include <iostream>
#include "listd.h"

using namespace std;
listD::listD()
{
    head = 0;
    tail = 0;
    curr = 0;
    temp = 0;
    lenght = largo();
}
void listD::AddBegin(int Data){
    nodePtr n = new node();
    n->data = Data;
    n->next = 0;
    n->prev = 0;
    if(lenght == 0){
        head = tail = n;
        lenght++;
    }else{
        head->prev = n;
        n->next = head;
        head = n;
        lenght++;
    }
}
void listD::AddEnd(int Data){
    nodePtr n = new node();
    n->data = Data;
    n->next = 0;
    n->prev = 0;
    if(lenght ==0){
        head = tail = n;
        lenght++;
    }else{
        tail->next = n;
        n->prev = tail;
        tail = n;
        n->next = 0;
        lenght++;
   }
}
void listD::AddNode(int Data, int pos){
    if(pos != 0 && pos != (lenght -1)){
        nodePtr n = new node();
        n->data = Data;
        n->next = 0;
        n->prev = 0;
        int indice = 0;
        temp = head;
        while(indice != pos){
            indice++;
            temp = temp->next;
        }
        n->next = temp;
        n->prev = temp->prev;
        temp->prev->next = n;
        temp->prev = n;
        lenght++;


    }else{
        if(pos ==0){
            AddBegin(Data);
        }else{
          AddEnd(Data);
        }
    }
}
void listD::DeleteBegin(){
    if(lenght ==0){
        head = tail = 0;
        lenght--;
    }else{
        nodePtr delPtr = 0;
        delPtr = head;
        head = head->next;
        head->prev =0;
        delete delPtr;
        lenght--;
    }
}
void listD::DeletEnd(){
    if(lenght != 0){
        nodePtr delPtr =0;
        delPtr = tail;
        tail = tail->prev;
        tail->next =0;
        lenght--;
        delete delPtr;
    }else{
        head = tail = 0;
        lenght--;
    }
}
void listD::DeleteNode(int pos){
    if(pos != 0 && pos != (lenght-1)){
        int indice =0;
        curr = head;
        nodePtr delPtr = 0;
        while(indice != pos){
            indice++;
            curr = curr->next;
        }
        delPtr = curr;
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        lenght--;
        delete delPtr;
    }else{
        if(pos==0){
            DeleteBegin();
        }else{
            DeletEnd();
        }
    }
}
int listD::GetValue(int pos){
    if(pos <=lenght ){
        temp= head;
        int indice =0;
        while(indice != pos){
            indice++;
            temp = temp->next;
        }
        return temp->data;
    }else{
        cout<<"La posicion excede el tamano de la lista"<< endl;
        return false;
    }
}
void listD::setValue(int pos, int value){
    if(pos <= lenght){
        temp= head;
        int indice =0;
        while(indice != pos){
            indice++;
            temp = temp->next;
        }
        temp->data = 0;
        temp->data = value;
    }else{
        cout<<"La posicion excede el tamano de la lista"<< endl;
    }
}

void listD::printList(){
    curr = head;
    while(curr!=0){
        cout<<curr->data;
        curr = curr->next;
    }
    delete curr;
}
int listD::largo(){
    curr = head;
    int result = 0;
    while(curr != 0){
        result++;
        curr = curr->next;
    }
    delete curr;
    return result;
}
