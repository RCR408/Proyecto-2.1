#ifndef NODE_CPP
#define NODE_CPP
#include "Node.h"

template<class T>
Node<T>::Node(T data) {

}

template<class T>
Node<T>::Node(T data, node<T> *next) {
}

template<class T>
T Node<T>::getData() {
}

template<class T>
Node<T> * Node<T>::getNext() {
}

template<class T>
void Node<T>::setData(T data) {
}

template<class T>
void Node<T>::setNext(node<T> *next) {
}

#endif 