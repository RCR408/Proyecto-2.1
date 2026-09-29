#pragma once

template <class T> struct node {
    node<T>* next;
    T data;
};
template <class T>class FLinked {
private:
    node<T>* head;

public:
    // constructor
    FLinked();

    void create(int, int);
    // regresar elemento según el dato
    void read(int);
    void update();
    void add(T);
    T get(int);
};