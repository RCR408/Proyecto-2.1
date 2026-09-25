#pragma once

template <class T> 
class Node {
private:
    T data;
    Node<T>* next;

public:
    Node(T data);
    Node(T data, Node<T>* next); 

    T getData();
    Node<T>* getNext();
    void setData(T data);
    void setNext(Node<T>* next); 
};

// Se incluye al final el cpp para la conexion de la template
#include "Node.cpp"