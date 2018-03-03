#include <iostream>
#include <list.h>
#include <listd.h>
#include <listc.h>
#include <arbol.h>
#include <iomanip>
#include <node.h>

using namespace std;
using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;
int main()
{
    Arbol Arbo;
    Arbo.Add(5);
    Arbo.Add(3);
    Arbo.Add(2);
    Arbo.Add(6);
    Arbo.Print();
}

//listC Paul;
//Paul.AddEnd(12);
//Paul.AddEnd(4);
//Paul.AddEnd(85);
//Paul.printList();
//Paul.DeleteNode(0);
//Paul.printList();
