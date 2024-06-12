#include "Baum.h"

template<class T> void Baum<T>::inOrder(Knote<T> *knoten) const
{
    if(knoten == nullptr)
    {
        return;
    }
    inOrder(knoten->getLeftChild());
    cout << knoten->getValue() << " ";
    inOrder(knoten->getRightChild());
}

template<class T> void Baum<T>::InOrder() const
{
    //TO DO : 
    //Check nonexistent root
    inOrder(root);
    cout << endl;
}

template<class T> void Baum<T>::preOrder(Knote<T> *knoten) const
{
    if(knoten == nullptr)
    {
        return;
    }
    cout << knoten->getValue() << " ";
    preOrder(knoten->getLeftChild());
    preOrder(knoten->getRightChild());
}

template<class T> void Baum<T>::PreOrder() const
{
    //TO DO : 
    //Check nonexistent root
    preOrder(root);
    cout << endl;
}

template<class T> void Baum<T>::postOrder(Knote<T> *knoten) const
{
    if(knoten == nullptr)
    {
        return;
    }
    preOrder(knoten->getLeftChild());
    preOrder(knoten->getRightChild());
    cout << knoten->getValue() << " ";
}

template<class T> void Baum<T>::PostOrder() const
{
    //TO DO : 
    //Check nonexistent root
    postOrder(root);
    cout << endl;
}

template<class T> void Baum<T>::insert(T wert)
{
    setRoot(insertRecursive(root, wert));
}

template<class T> Knote<T> *Baum<T>::insertRecursive(Knote<T> *knoten, T wert)
{
    if(knoten == nullptr)
    {
        return new Knote<T>(wert);
    }
    if(wert < knoten->getValue())
    {
        knoten->setLeftChild(insertRecursive(knoten->getLeftChild(), wert));
    }
    else if(wert > knoten->getValue())
    {
        knoten->setRightChild(insertRecursive(knoten->getRightChild(), wert));
    }
    return knoten;
}