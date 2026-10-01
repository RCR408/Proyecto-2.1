#include <iostream>
#include "FLinked.cpp"
#include "Node.cpp"

int main() {
    FLinked<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    int i = 0;
    for (i = 0; i <= 3; i++)
        std::cout << list.get(i);

    // usando la función de update, con el 2

    //list.update(2);
    list.delf(2);

    for (i = 0; i <= 3; i++)
        std::cout << list.get(i);

    //std::cout << list[1] << std::endl;


    return 0;

}