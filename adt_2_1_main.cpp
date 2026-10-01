#include <iostream>
#include "FLinked.h"

int main() {
    FLinked<int> list;
    list.create(1, 2);
    list.create(2, 5);
    list.create(3, 7);
    list.create(4, 9);

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