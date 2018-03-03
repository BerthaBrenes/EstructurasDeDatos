#include <iostream>
#include "list.h"


using namespace std;

list::list()
{
    head = 0;
    tail = 0;
    curr = 0;
    temp = 0;
    lenght = largo();
}
void list::AddEnd(int Data){
    nodePtr n = new node;
    n->next = nullptr;
    n->data = Data;
    if(head != 0){
        tail->next = n;
        tail = n;
    }
    else{
        head = tail = n;
    }
}
void list::AddBegin( int Data){
    nodePtr n = new node;
    n->next = nullptr;
    n->data = Data;
    lenght = largo();
    if(head != 0){
        n->next = head;
        head = n;
    }
    else{
        head = tail = n;
    }
}
void list::AddNode(int pos, int value){
   if(pos != 0 && pos != (largo()-1)){
       nodePtr n = new node;
       n->data = value;
       n->next = 0;
       int indice = 0;
       temp = head;
       while((pos-1) != indice){
           indice++;
           temp = temp->next;
       }
       n->next = temp->next;
       temp->next = n;
   }else{
       if(pos == 0){
           AddBegin(value);
       }else{
           AddEnd(value);
       }
   }
}
void list::DeleteBegin(){
    nodePtr delPtr = 0;
    int large = largo();
    if(large != 1){
        head = head->next;
        delete delPtr;
    }else{
        head = tail = 0;
    }
}
void list::DeletEnd(){
    nodePtr delPtr =0;
    int large = largo();
    if(large != 1){
        temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = 0;
        tail = temp;
    }else{
        head = tail =0;
    }
    temp = delPtr;
    delete delPtr;
}
void list::DeleteNode(int pos){
    if(pos != 0 && pos != (largo()-1)){
        int indice =0;
        curr = head;
        nodePtr deleteNode =0;
        while(indice != (pos-1)){
            indice++;
            curr = curr->next;
        }
        deleteNode = curr->next;
        curr->next = curr->next->next;
        delete deleteNode;
    }else{
        if(pos == 0){
            DeleteBegin();
        }else{
            DeletEnd();
        }
    }

}
void list::printList(){
    curr = head;
    while(curr != 0){
        cout << curr->data;
        curr = curr->next;
    }
    delete curr;
}

int list::largo(){
    int result = 0;
    curr = head;
    while(curr != 0){
        result++;
        curr = curr->next;
    }
    delete curr;
    return result;
}
int list::GetValue(int pos){
    temp = head;
    int cant = 0;
    if(pos <= largo()){
       while(temp != 0 ){
           if(pos == cant){
               cout << "holi"<< temp->data<<endl;
               return temp->data;
               delete temp;
           }
           cant++;
           temp = temp->next;
       }
    }
   else{
        delete temp;
        return false;
    }
}
void list::setValue(int pos, int value){
    if(pos <= largo()){
        int indice = 0;
        temp = head;
        while(indice != (pos)){
            indice++;
            temp = temp->next;
        }
        temp->data = 0;
        temp->data = value;
    }else{
        cout << "La posicion no entra dentro del rango del largo" <<endl;
    }
}



