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
private:
    int data;
    Node* left;
    Node* right;
    Node* head;
};

#endif // NODE_H
