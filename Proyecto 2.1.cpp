
#include <iostream>
#include "FLinked.h"

int main()
{

    FLinked<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    int i = 0;
    for (i = 0; i <= 3; i++)
        std::cout << list.get(i);

    //list.update(2);
    list.delete2();

    for (i = 0; i <= 3; i++)
        std::cout << list.get(i);

    //std::cout << list[1] << std::endl;


    return 0;

    //https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019


}

