// test_DyV.cpp
#include <iostream>
#include <vector>
#include "DyV.h"

void Busqueda() {
    std::vector<int> v = {1, 3, 5, 7, 9, 11, 13};
    int x = 7;
    int pos = BusquedaBinaria(x, v, 0, v.size() - 1);
    std::cout << "El valor " << x << " está en la posición " << pos << std::endl;
}

int main() {
    Busqueda();
    return 0;
}
