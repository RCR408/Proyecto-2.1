#pragma once
#include <iostream>

template<class T> 
class FLinked
{
private:
	struct node;
public:
	FLinked();
	~FLinked();

	// UPDATE: recibe un índice y un dato, busca el nodo en la posición indicada y actualiza su valor con el dato proporcionado.
	void updatePos(int pos); // Actualiza el dato en la posición especificada a 0.
	void updateDat(int dat); // Actualiza el nodo que contiene el dato especificado a 0.

	// DELETE: recibe un índice o un dato y elimina el nodo correspondiente de la lista.
	void delete1(T data); // Elimina el nodo que contiene el dato especificado.
	void delete2(); // Elimina el último nodo de la lista.

	// ADD: recibe un dato y lo agrega al final de la lista.
	void add(T data);

	// GET: recibe un índice y devuelve el dato del nodo en esa posición.
	T get(int index);

	// Sobrecarga del operador [] para acceder a los elementos de la lista mediante un índice.
	T operator[](int index);
};