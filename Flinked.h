#pragma once
#include <iostream>
using namespace std;

template<class T>
struct node {
	node<T>* next;
	T data;

};


template<class T>
class FLinked
{
public:
	node<T>* first;
	node<T>* last;
	FLinked<T>() {
		first = NULL;
		last = NULL;
	}


	//voy a hacer un update donde reciba el indice de lo que quiero modificar y por lo que lo quiero modificar

	void update(int pos) //va a Avenir a cambiar por 0 la pos
	{
		node<T>* ventura = first;
		for (int i = 0; i < pos; i++)
		{
			ventura = ventura->next;
			std::cout << "camine" << std::endl;
		}
		ventura->data = 0;

	}


	//void update(int dat)
	//{
	//	node<T>* aux;
	//	aux = first;
	//	while (aux->data != dat)
	//	{
	//		std::cout << "no";
	//		aux = aux->next;
	//	}
	//	aux->data = 0;
	//	
	//	// declaro un apuntador temporal el cual va a apuntar al primer elemento
	//	// ciclo que va a estar caminando hasta encontra el elemento que estoy busancdo
	//	//una vez que lo encuentre, lo actualizo

	//}

	delete (T data)
		// pueden ser varias opciones de como implementen el delete
		//ejemplo, borrar por indice (el que este en tal posicion) borrar por dato(borrar el dato que sean un "5")
		//hacer la version por dato

		void delete2()
	{

		//cout << aux->data << std::endl;
		//cout << aux2->data << std::endl;

		//delete aux;


	}

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

	T get(int index) {
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

	T operator[](int index) {
		return get(index);
	}

};
