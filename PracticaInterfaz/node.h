#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node(int v);
    Node();
    ~Node();

    int getvalue();
    void setValue(int value);
    void print();
    Node* getleft();
    Node* getright();
    Node* gethead();
    void setRight(Node* nodo);
    void setLeft(Node* nodo);
    void sethead(Node* nodo);
private:
    int data;
    Node* left;
    Node* right;
    Node* head;
};

#endif // NODE_H
