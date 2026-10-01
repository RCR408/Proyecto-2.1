#include "FLinked.h"
#include <iostream>

template<class T>
FLinked<T>::FLinked() {
    head = nullptr;
}

template <class T>
void FLinked<T>::create(int pos, T data) {
    // para guardar los datos recibidos ya en un nodo nuevo
    node<T>* nuevo = new node<T>;
    nuevo->data = data;
    nuevo->next = nullptr;

    // para intertarlo al inicio de la lista o cuando la lista esta vacia
    if (head == nullptr || pos <= 0) {
        nuevo->next = head;
        head = nuevo;
        return;
    }

    // para insertarlo en el medio o final se camina
    node<T>* curr = head;
    int index = 0;
    // avanzar hasta donde el index ingresado - 1 para hacer el enlace
    while (index < pos - 1 && curr->next != nullptr) {
        curr = curr->next;
        index++;
    }

    // Enlazar nuevo nodo
    nuevo->next = curr->next;
    curr->next = nuevo;
}

template<class T>
int FLinked<T>::read(T t) {
    node<T>* curr = head;
    int i = 0;

    while (curr != nullptr) {
        if (curr->data == t) {
            std::cout << "El dato se encuentra en el index: "<< i << std::endl;
            return i;
        }
        i++;
        curr = curr->next;
    }

    std::cout << "No se encontro el dato." << std::endl;
    return -1;
}


template<class T>
void FLinked<T>::add(T data) {
    node<T>* curr = head;

    if (curr == nullptr) {
        head = new node<T>;
        head->data = data;
        head->next = nullptr;
        return;
    }

    while (true) {
        if (curr->next == nullptr) {
            curr->next = new node<T>;
            curr->next->data = data;
            curr->next->next = nullptr;
            break;
        }
        curr = curr->next;
    }
}

template<class T>
void FLinked<T>::update(int index, T newValue) {
    node<T>* curr = head;
    // separar en if 
    for (int i = 0; curr != nullptr && i < index; i++)
        curr = curr->next;

    if (curr != nullptr)
        curr->data = newValue;
}

template<class T>
void FLinked<T>::delf(T value) {
   node<T>* last = nullptr;
   node<T>* curr = head;
    while (curr != nullptr) {
       if (curr->data == value) {
           if (last == nullptr) {
               head = curr->next;
               delete curr;
               break;
           }

           last->next = curr->next;
           delete curr;
           break;
       }

       last = curr;
       curr = curr->next;
   }

   std::cout << "No se encontro el dato a eliminar." << std::endl;
}

template<class T>
T FLinked<T>::get(int index) {
    if (index < 0)
        return T{};

    node<T>* curr = head;
    for (int i = 0; curr != nullptr && i < index; ++i)
        curr = curr->next;

    return curr == nullptr ? T{} : curr->data;
}

template <class T>
T FLinked<T>::operator[](int index) {
	return get(index);
}
