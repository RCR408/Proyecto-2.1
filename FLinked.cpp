#include "FLinked.h"
#include <iostream>

template<class T>
FLinked<T>::FLinked() {
    head = nullptr;
}

template<class T>
void FLinked<T>::create(int pos, T data) {
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
}

template<class T>
int FLinked<T>::read(T t) {
    node<T>* curr = head;
    int i = 0;

    while (true) {
        T temp = curr->data;

        if (temp == t) {
            std::cout << "El dato se encuentra en el index: "<< i << std::endl;
            return i;
        }
        
        if (curr->next == nullptr) {
            std::cout << "No se encontro el dato." << std::endl;
            return -1;
        }
        i++;
        curr = curr->next;
    }
}


template<class T>
void FLinked<T>::add(T data) {
    node<T>* curr = head;

    if (curr == nullptr) {
        head = new node<T>{ data,nullptr };
        return;
    }

    while (true) {
        if (curr->next == nullptr) {
            curr->next = new node<T>{ data,nullptr };
            break;
        }
        curr = curr->next;
    }
}

template<class T>
void FLinked<T>::update(int index, T newValue) {
    node<T>* curr = head;
    if (head == nullptr)
        return;
    for (int i = 0; i < index; i++) {
        if (curr == nullptr) {
            return;
        }
        curr = curr->next;
    }

    curr->data = newValue;
}

template<class T>
void FLinked<T>::delf(T value) {
   node<T>* last = nullptr;
   node<T>* curr = head;
   while (true) {
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

       if (curr->next == nullptr) {
           std::cout << "No se encontro el dato a eliminar." << std::endl;
           break;
       }

       last = curr;
       curr = curr->next;
   }
}

template<class T>
T FLinked<T>::get(int index) {
        if (index == 0) {
		// Get the first element
		return head->data;
	}
	else {
		// Get the index'th element
		node<T>* curr = head;
		for (int i = 0; i < index; ++i) {
            if (curr->next) {
                return T{};
            }
			curr = curr->next;
		}
		return curr->data;
	}
}

template <class T>
T FLinked<T>::operator[](int index) {
	return get(index);
}
