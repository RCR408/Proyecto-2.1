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

    std::cout << "Despues de haber probado la funcion ADD en lista vacia: \nImpresion de lista con uso de sobrecarga de []" << "\n";
    
    for(int i =0; i < 6; i++){
        std:: cout << list[i] << "\n";
    }

    std::cout << "Pruebas de la funcion CREATE (insertion)" << "\n";
    std::cout << "Insertando un 5 en la posicion 0, nuevo head" << "\n";
    list.create(0, 5); 
    
    std::cout << "Insertando un 15 en la posicion 2, en medio" << "\n";
    list.create(2, 15);
    
    std::cout << "Insertando un 500 en la posicion 40, como excede el largo de la lista, va al final" << "\n";
    list.create(40, 500);

    std::cout << "Imprimiendo otra vez con los cambios de lista con el create:::: \n Ahora imprimiendo con el get" << "\n";

    for(int i =0; i < 9; i++){
        std:: cout << list.get(i) << "\n";
    }


    std::cout << "Prueba de READ para busquedas" << "\n";
    std::cout << "Buscando el 15: " << "\n";;
    list.read(15);
    
    std::cout << "Buscando el 101, no existe: " << "\n";
    list.read(101);
    std::cout << "Buscando el 100, si existe: " << "\n";
    list.read(100);



    std::cout << "UPDATE, Modificando el index 3, actualmente es 50" << "\n";
    list.update(3, 99);
    std::cout << "Nuevo valor en el index 3 es " << list.get(3) << "\n";

    
    std::cout << "DELF: Eliminando nodos" << "\n";
    std::cout << "Eliminando el 5, borrar head" << "\n";
    list.delf(5);
    
    std::cout << "Eliminando el 30, borrar en medio" << "\n";
    list.delf(30);

    std::cout << "Intentando eliminar el 200, no existe" << "\n";
    list.delf(200);

    std::cout << "Imprimiendo lista final:" << "\n";
    for (int i = 0; i < 6; i++) {
        std::cout << "Index " << i << " es " << list.get(i) << "\n";
    }

    return 0;

}