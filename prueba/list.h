#ifndef LIST_H
#define LIST_H


class list
{

private:
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    nodePtr tail;
    int lenght;
public:
    list();
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

#endif // LIST_H
