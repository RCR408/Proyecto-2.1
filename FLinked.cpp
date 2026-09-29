#include "FLinked.h"
#include <iostream>

template<class T>
FLinked<T>::FLinked() {
    head = nullptr;
}

template<class T>
void FLinked<T>::create(int pos, int data) {
    /* Se recibe la posición y el dato a ingresar en la lista.
    Si el index es mayor al tamaño total de la lista, entonces se pone al final. */
    node<T>* nuevo = new node<T>;
    nuevo->data = data;
    nuevo->next = nullptr;

    if (!head) {
        head = nuevo;
		std:: cout << "Se agrego un nuevo elemento." << "\n";
    }
    else {
        node<T>* curr = head;

        for (int i = 0; i < pos; i++) {
            curr = curr->next;
            if (curr->next == nullptr) {
			/* Se camina según la posición hasta que se llega a -> next = nullptr,
            lo que quiere decir que la lista ya está vacía. */
                std:: cout <<"Se llego a la ultima parte de la lista." << "\n";
				std:: cout << "La posicion supero el largo de la lista, con lo que se ingresa al final." << "\n";
				curr->next = nuevo; 
				curr = nuevo;
				
                break;
            }
        }
    }
};

template<class T>
void FLinked<T>::update(int, int) {
}

template<class T>
void FLinked<T>::add(T data) {

}

template<class T>
T FLinked<T>::get(int index) {
        if (index == 0) {
		// Get the first element
		return this->first->data;
	}
	else {
		// Get the index'th element
		node<T>* curr = this->first;
		for (int i = 0; i < index; ++i) {
			curr = curr->next;
		}
		return curr->data;
	}
}

template <class T>
T FLinked<T>::operator[](int index) {
	return get(index);
}