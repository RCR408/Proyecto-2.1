#ifndef NODE_CPP
#define NODE_CPP
#include "Node.h"

template <class T> 


struct Node {
private:
    T data;
    Node<T>* next;
};

template <class T>
Node<T>::Node(T val) {
    this-> data = val;
    next = NULL;
}



template <class T> 
Node<T>::Node(T data, Node<T>* next) {
    this->data = data;
    this->next = next;
}


template <class T>
T Node<T>::getData() {
    return this->data;
}


template <class T>
Node<T>* Node<T>::getNext() {
    return this->next;
}


template <class T>
void Node<T>::setData(T data) {
    this->data = data;
}


template <class T>
void Node<T>::setNext(Node<T>* next) {
    this->next = next;
}

#endif 