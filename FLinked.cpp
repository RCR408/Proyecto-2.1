#include "FLinked.h"

template <class T>
struct node {
	node<T>* next;
	T data;
};

template <class T>
class FLinked
{
	node<T>* first;
	node<T>* last;
	FLinked<T>() {
		first = NULL;
		last = NULL;
	}
};

/* Función que declara un apuntador temporal que apunta al primer elemento de la lista,
luego recorre la lista hasta llegar a la posición especificada y actualiza el dato en esa posición a 0. */
template<class T>
void updatePos(int pos)
{
	node<T>* ventura = first;
	for (int i = 0; i < pos; i++)
	    {
			ventura = ventura->next;
			std::cout << "camine" << std::endl;
		}
		ventura->data = 0;
}

/* Función que declara un apuntador temporal que apunta al primer elemento de la lista,
luego recorre la lista hasta encontrar el nodo con el dato especificado y lo actualiza a 0.
Si no encuentra el dato, imprime "no" en cada iteración. */
template <class T>
void updateDat(int dat)
	{
		node<T>* aux;
		aux = first;
		while (aux->data != dat)
		{
			std::cout << "no";
			aux = aux->next;
		}
		aux->data = 0;
}

template <class T>
void add(T data) {
	if (!first) {
		// The list is empty
		first = new node<T>;
		first->data = data;
		first->next = NULL;
		last = first;
	}
	else {
		// The list isn't empty
		if (last == first) {
			// The list has one element
			last = new node<T>;
			last->data = data;
			last->next = NULL;
			first->next = last;
		}
		else {
			// The list has more than one element
			node<T>* insdata = new node<T>;
			insdata->data = data;
			insdata->next = NULL;
			last->next = insdata;
			last = insdata;
		}
	}
}

template <class T>
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