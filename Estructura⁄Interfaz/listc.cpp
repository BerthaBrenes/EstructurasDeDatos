#include "iostream"
#include "listc.h"


using namespace std;
listC::listC()
{
    head = 0;
    curr = 0;
    temp = 0;
    lenght = 0;
}
void listC::AddBegin(int Data){
    nodePtr n = new node();
    n->data = Data;
    if(lenght == 0){
        head = n;
        n->next= head;
        n->prev = head;
        lenght++;
    }else{
        head->prev->next = n;
        n->prev = head->prev;
        head->prev = n;
        n->next = head;
        head = n;
        lenght++;
    }
}
void listC::AddEnd(int Data){
    nodePtr n = new node();
    n->data = Data;
    n->next = 0;
    n->prev = 0;
if(lenght ==0){
    head = n;
    n->next = head;
    n->prev = head;
    lenght++;
}else{
    temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    temp->next->prev = n;
    temp->next = n;
    n->prev = temp;
    n->next = head;
    lenght++;
}
}
void listC::AddNode(int Data, int pos){
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
    temp->prev->next = n;
    temp->prev = n;
    n->next = temp;
    n->prev = temp->prev;
    lenght++;


}else{
    if(pos ==0){
        AddBegin(Data);
    }else{
      AddEnd(Data);
    }
}
}
void listC::DeleteBegin(){
    nodePtr delPtr =0;
    if(lenght == 1){
        delPtr = head;
        head = 0;
        delete delPtr;
        lenght--;
    }else{
        delPtr = head;
        head->next->prev = head->prev;
        head->prev->next = head->next;
        head = head->next;
        delete delPtr;
        lenght--;
    }
}
void listC::DeletEnd(){
     nodePtr delPtr =0;
    if(lenght ==1){
        delPtr = head;
        head = 0;
        delete delPtr;
        lenght--;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->prev->next = head;
        head->prev = temp->prev;
        temp->next = 0;
        temp->prev = 0;
        temp = 0;
        lenght--;
    }
}

void listC::DeleteNode(int pos){
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
int listC::largo(){

    return lenght;
}

void listC::printList(){
    curr = head;
    while(curr->next != head){
        cout<<curr->data;
        curr = curr->next;
    }
    cout<<curr->data<<endl;
    //delete curr;
}
int listC::GetValue(int pos){
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
void listC::setValue(int pos, int value){
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
