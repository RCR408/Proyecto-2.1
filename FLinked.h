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
    void create(int, int);
    
    // READ: devolver un nodo de la lista con las condiciones solicitadas.
    void read(int);

    // UPDATE: 
    void update(int, int);

    // DELETE: recibe un índice y elimina el nodo correspondiente de la lista.
    void delete(T);

	// ADD: recibe un dato y lo agrega al final de la lista.
	void add(T);

	// GET: recibe un índice y devuelve el dato del nodo en esa posición.
	T get(int);

	// Sobrecarga del operador [] para acceder a los elementos de la lista mediante un índice.
	T operator[](int);
};