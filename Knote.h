#include <iostream>
#include <ostream>

using namespace std;


#ifndef KNOTE_H
#define KNOTE_H

template <typename T>
class Knote
{
private:
    T value;  
    Knote *left;
    Knote *right;

public:
    Knote(T wert) : value(wert), left(nullptr), right(nullptr){};

    void setLeftChild()
    {
        T wert;
        cout << "Bitte geben Sie den Wert des linken Kindes ein: " << endl;
        cin >> wert; 
        left = new Knote(wert);
    };

    void setLeftChild(Knote* knote)
    {
        left = knote;
    };

    Knote* getLeftChild() const
    {
        return left;
    };

    void setRightChild()
    {
        T wert;
        cout << "Bitte geben Sie den Wert des rechten Kindes ein: " << endl;
        cin >> wert; 
        value = wert;
        right = new Knote(wert);
    };

    void setRightChild(Knote* knote)
    {
        right = knote;
    };

    Knote* getRightChild() const
    {
        return right;
    };

    void setValue()
    {
        T wert;
        cout << "Bitte geben Sie den Wert des Knotens ein: " << endl;
        cin >> wert; 
        value = wert;
    };

    T getValue() const
    {
        return value;
    };

};

//function for operator <<

template<typename T>
ostream& operator<<(ostream& os, const Knote<T>& knote)
{
    if(knote == nullptr)
    {
        os << "Knote is empty" << endl;
        return os;
    }else{
        os << "Value: " << knote.getValue() << endl;
        os << "Left Child: " << knote.getLeftChild() << endl;
        os << "Right Child: " << knote.getRightChild() << endl;
    }
    return os;
}

#endif