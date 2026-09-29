#include "FLinked.h"
#include <iostream>


template<class T>
FLinked<T>::FLinked() {
    head = nullptr;
}

template<class T>
void FLinked<T>::create(int pos, int data) {
    // se recibe la posicion y el dato a ingresar en la lista
    // si el index es mayor al tamaño total de la lista, entonces se pone al final(tipo add)
    node<T>* nuevo = new node<T>;
    nuevo->data = data;
    nuevo->next = nullptr;

    if (!head) {
        head->next = nuevo;
        head = nuevo;
    }else {
        nuevo = head;
        for (int i = 0; i < pos; i++) {
            nuevo = nuevo->next;
            if (nuevo->next == nullptr) {
                std:: cout <<"se llegó a la última parte de la lista" << "\n";

                break;


            }
            // se camina según la pos hasta que se llega a -> next = nullptr,
            // quiere decir que la lista ya esta vacía
        }
    }


}

template<class T>
void FLinked<T>::update() {
}

template<class T>
void FLinked<T>::add(T data) {

}

template<class T>
T FLinked<T>::get(int index) {

}

