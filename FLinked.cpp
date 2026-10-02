#include "FLinked.h"
#include <iostream>

template<class T>
FLinked<T>::FLinked() {
    head = nullptr;
}

template <class T>
void FLinked<T>::create(int pos, T data) {
    // Para guardar los datos recibidos ya en un nodo nuevo.
    node<T>* nuevo = new node<T>;
    nuevo->data = data;
    nuevo->next = nullptr;

    // Para insertarlo al inicio de la lista o cuando la lista esta vacía.
    if (head == nullptr || pos <= 0) {
        nuevo->next = head;
        head = nuevo;
        return;
    }

    // Para insertarlo en el medio o final se camina.
    node<T>* curr = head;
    int index = 0;
    // Avanzar hasta donde el index ingresado - 1 para hacer el enlace.
    while (index < pos - 1 && curr->next != nullptr) {
        curr = curr->next;
        index++;
    }

    // Enlazar nuevo nodo primero conectando next del nuevo.
    nuevo->next = curr->next;
    curr->next = nuevo;
}

template<class T>
int FLinked<T>::read(T t) {
    node<T>* curr = head;
    int i = 0;

    // Se camina con ayuda de curr hasta que se encuentre con el último.
    while (curr != nullptr) {
        if (curr->data == t) {
            std::cout << "El dato se encuentra en el index: "<< i << "\n";
            return i;
        }
        i++;
        curr = curr->next;
    }
    // Si es que se sale del while, se sabría que no se encontró el dato.
    std::cout << "No se encontro el dato." << "\n";
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
void FLinked<T>::update(int index, T datarec) {
    node<T>* curr = head;

    for (int i = 0; i < index; i++){
        // Se asegura que no se quede sin nodos.
        if(curr == nullptr){
            break;
        }
        curr = curr->next;
    }

    // Si hay nodo en la posición, se cambia el valor.
    if (curr != nullptr)
        curr->data = datarec;
}

template<class T>
void FLinked<T>::delf(T value) {
    // Función para eliminar el data del nodo.
   node<T>* prev = nullptr;
   node<T>* curr = head;
    while (curr != nullptr) {

       if (curr->data == value) {
            if (prev == nullptr) {
                head = curr->next; 
                // Se actualiza puntero del head.
            } else {
                prev->next = curr->next; 
                // Se da la conexión entre punteros antes de eliminarlo.
            }

            delete curr; 
            return;      
            // Se sale de la función una vez que se borra.
        }

       prev = curr;
       curr = curr->next;
   }

   std::cout << "No se encontro el dato a eliminar." << "\n";
}

template<class T>
T FLinked<T>::get(int index) {
    // Validación del índice.
    if (index < 0)
        return T{};

    node<T>* curr = head;
    for (int i = 0; curr != nullptr && i < index; ++i)
        curr = curr->next;
        // if-else para regresar segun lo que sea curr.
        // Si se es nullptr regresa el T genérico.
        // De lo contrario, se regresa el data.
    return curr == nullptr ? T{} : curr->data;
}

template <class T>
T FLinked<T>::operator[](int index) {
    // Se reusa la lógica de la funcion get().
	return get(index);
}