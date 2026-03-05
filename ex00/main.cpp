#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{    
    // --- Prueba con std::list ---
    std::list<int> list;
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    
    std::list<int>::iterator it2 = easyfind(list, 4);
    
    // AQUÍ usamos la variable 'it2' y decidimos qué imprimir
    if (it2 == list.end()) {
        std::cout << "Lista: Valor no encontrado" << std::endl;
    } else {
        std::cout << "Lista: Valor encontrado: " << *it2 << std::endl;
    }

    // --- Prueba con std::vector ---
    std::vector<int> vec;
    for (int i = 1; i <= 7; ++i) {
        vec.push_back(i);
    }

    std::vector<int>::iterator it = easyfind(vec, 8); // Buscamos un 8 que no existe

    // AQUÍ usamos la variable 'it'
    if (it == vec.end()) {
        std::cout << "Vector: Valor no encontrado" << std::endl;
    } else {
        std::cout << "Vector: Valor encontrado: " << *it << std::endl;
    }

    return 0;
}
