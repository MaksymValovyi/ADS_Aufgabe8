#include <iostream>

#include "Knote.h"

using namespace std;

template <typename T>
class Baum
{
private:
    Knote<T> *root;
public:
    Baum(): root(nullptr){};
    
    void InOrder() const;
    void inOrder(Knote<T> *knoten) const;
    
    void PreOrder() const;
    void preOrder(Knote<T> *Knote) const;

    void PostOrder() const;
    void postOrder(Knote<T> *Knote) const;

    void insert(T wert);
    Knote<T>* insertRecursive(Knote<T> *knoten, T wert);

    void setRoot(Knote<T> *knoten)
    {
        root = knoten;
    };

    Knote<T>* getRoot() const
    {
        return root;
    };
};

