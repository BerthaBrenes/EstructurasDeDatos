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

    list Paul;
    Paul.AddEnd(12);
    Paul.AddEnd(4);
    Paul.AddEnd(85);
    Paul.printList();
    cout<<"\n nueva lista"<<endl;
    Paul.DeleteNode(0);
    Paul.printList();

}


/**
Arbol Arbo;
Arbo.Add(5);
Arbo.Add(4);
Arbo.Add(8);
Arbo.Add(2);
Arbo.Add(7);
Arbo.Add(3);
Arbo.Add(9);
Arbo.Add(1);
Arbo.Print();
Arbo.Delete(1);
cout<<"nuevo print"<<endl;
Arbo.Print();
 * */
