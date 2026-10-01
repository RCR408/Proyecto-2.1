#pragma once

template <class T> struct node {
    node<T>* next;
    T data;
};
template <class T>class FLinked {
private:
    node<T>* head;

public:
    FLinked();

    // CREATE: insertar un nodo en la lista.
    void create(int, T);
    
    // READ: devolver un nodo de la lista con las condiciones solicitadas.
    int read(T);

    // UPDATE: 
    void update(int, T);

    // DELETE: recibe un índice y elimina el nodo correspondiente de la lista.
    void delf(T);

	// ADD: recibe un dato y lo agrega al final de la lista.
	void add(T);

	// GET: recibe un índice y devuelve el dato del nodo en esa posición.
	T get(int);

	// Sobrecarga del operador [] para acceder a los elementos de la lista mediante un índice.
	T operator[](int);
};