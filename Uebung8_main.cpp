#include <iostream>
#include <string>

using namespace std;

#include "Knote.h"
#include "Baum.cpp"

void checkNode()
{
    // Erstellen von Knoten mit verschiedenen Datentypen
    Knote<int> intKnoten(5);
    Knote<double> doubleKnoten(3.14);
    Knote<string> stringKnoten("Hallo");

    // Werte der Knoten ausgeben
    cout << "intKnoten Wert: " << intKnoten.getValue() << endl;
    cout << "doubleKnoten Wert: " << doubleKnoten.getValue() << endl;
    cout << "stringKnoten Wert: " << stringKnoten.getValue() << endl;

    // Kinder setzen und ausgeben
    Knote<int> leftChild(2);
    Knote<int> rightChild(8);

    intKnoten.setLeftChild();
    intKnoten.setRightChild();

    cout << "intKnoten linkes Kind Wert: " << intKnoten.getLeftChild()->getValue() << endl;
    cout << "intKnoten rechtes Kind Wert: " << intKnoten.getRightChild()->getValue() << endl;
}

void vorDemInsertFunc()
{
    Knote<int> intKnoten0(15);
    Knote<int> intKnoten1(5);
    Knote<int> intKnoten2(3);
    Knote<int> intKnoten3(12);
    Knote<int> intKnoten4(10);
    Knote<int> intKnoten5(14);
    Knote<int> intKnoten6(13);
    Knote<int> intKnoten7(20);
    Knote<int> intKnoten8(17);
    Knote<int> intKnoten9(31);

    intKnoten0.setLeftChild(&intKnoten1);
    intKnoten0.setRightChild(&intKnoten7);

    intKnoten1.setLeftChild(&intKnoten2);
    intKnoten1.setRightChild(&intKnoten3);

    intKnoten3.setLeftChild(&intKnoten4);
    intKnoten3.setRightChild(&intKnoten5);

    intKnoten5.setLeftChild(&intKnoten6);

    intKnoten7.setLeftChild(&intKnoten8);
    intKnoten7.setRightChild(&intKnoten9);

    Baum<int> intBaum;

    intBaum.setRoot(&intKnoten0);

    cout << "InOrder: " << endl;     
    intBaum.InOrder();

    cout << "PreOrder: " << endl;
    intBaum.PreOrder();

    cout << "PostOrder: " << endl;
    intBaum.PostOrder();
}

void nachInsertFunc()
{
    Baum<int> baum;

    // Einfügen der Knotenwerte in den Baum
    baum.insert(15);
    baum.insert(5);
    baum.insert(20);
    baum.insert(3);
    baum.insert(12);
    baum.insert(10);
    baum.insert(14);
    baum.insert(13);
    baum.insert(17);
    baum.insert(31);

    cout << "InOrder: " << endl;   
    baum.InOrder();

    cout << "PreOrder: " << endl;
    baum.PreOrder();

    cout << "PostOrder: " << endl;
    baum.PostOrder();
}

int main(int argc, char const *argv[])
{
    // checkNode();

     vorDemInsertFunc();

     nachInsertFunc();

    return 0;
}
