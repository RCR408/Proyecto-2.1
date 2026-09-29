#pragma once
#include "FLinked.h"

template <class T> 
class Node {
private:
    T data;
    Node<T>* next;
public:
    Node(T);
    Node (T, node<T>*);
    T getData() const;
    Node<T>* getNext();
    void setData(T);
    void setNext(node<T>*);
};