#ifndef LISTC_H
#define LISTC_H


class listC
{
private:
    typedef struct node{
        int data;
        node* next;
        node* prev;
    }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    int lenght;
public:
    listC();
    void AddNode(int Data, int pos);
    void DeleteNode(int pos);
    void printList();
    void AddEnd(int Data);
    void AddBegin(int Data);
    void DeletEnd();
    void DeleteBegin();
    int GetValue(int pos);
    void setValue(int pos, int value);
    int largo();
};

#endif // LISTC_H
