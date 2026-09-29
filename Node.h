#pragma once
#include "FLinked.h"
#include "FLinked.h"


template <class T> class Node {
private:
    T data;
    Node<T>* next;
public:
    Node(T data);
    Node (T data, node<T>* next);
    T getData();
    Node<T>* getNext();
    void setData(T data);
    void setNext(node<T>* next);

};
