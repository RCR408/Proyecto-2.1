#pragma once
#include "FLinked.h"

template <class T> 
class Node {
private:
    T data;
    Node<T>* next;
public:
    Node(T);
    Node(T, Node<T>*);
    T getData() const;
    Node<T>* getNext();
    void setData(T);
    void setNext(Node<T>*);
};