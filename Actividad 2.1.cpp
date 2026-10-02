#include <iostream>
#include "FLinked.h"

int main() {

    FLinked<int> list;

    list.add(10);
    list.add(20);
    list.add(30);
    list.add(50);
    list.add(80);
    list.add(100);

    std::cout << "-------------------- CREATE --------------------\n";

    std::cout << "Lista inicial:\n";
    for(int i = 0; i < 6; i++){
        std::cout << list[i] << "\n";
    }

    std::cout << "\nInsertando 5 en posicion 0\n";
    list.create(0, 5);

    std::cout << "Insertando 15 en posicion 2\n";
    list.create(2, 15);

    std::cout << "Insertando 500 en posicion 40\n";
    list.create(40, 500);

    std::cout << "\nLista despues de CREATE:\n";
    for(int i = 0; i < 9; i++){
        std::cout << list.get(i) << "\n";
    }


    std::cout << "\n-------------------- READ --------------------\n";

    std::cout << "Buscando 15:\n";
    list.read(15);

    std::cout << "\nBuscando 101 (no existe):\n";
    list.read(101);

    std::cout << "\nBuscando 100:\n";
    list.read(100);


    std::cout << "\n-------------------- UPDATE --------------------\n";

    std::cout << "Valor actual en index 3: " << list.get(3) << "\n";

    list.update(3, 99);

    std::cout << "Nuevo valor en index 3: " << list.get(3) << "\n";


    std::cout << "\n-------------------- DELETE --------------------\n";

    std::cout << "Eliminando 5 (head)\n";
    list.delf(5);

    std::cout << "Eliminando 30 (medio)\n";
    list.delf(30);

    std::cout << "Intentando eliminar 200 (no existe)\n";
    list.delf(200);


    std::cout << "\n-------------------- LISTA FINAL --------------------\n";

    for(int i = 0; i < 7; i++){
        std::cout << "Index " << i << ": " << list.get(i) << "\n";
    }

    return 0;
}