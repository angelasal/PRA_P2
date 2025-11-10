// test_DyV.cpp
#include <iostream>
#include <vector>
#include "DyV.h"

void probarBusquedaAscendente() {
    std::vector<int> v = {1, 3, 5, 7, 9, 11, 13};
    int x = 7;
    int pos = BusquedaBinaria(x, v, 0, v.size() - 1);
    std::cout << "BusquedaBinaria: El valor " << x << " está en la posición " << pos << std::endl;
}

void probarBusquedaDescendente() {
    std::vector<int> v = {20, 18, 15, 12, 10, 5, 2};
    int x = 10;
    int pos = BusquedaBinaria_INV(x, v, 0, v.size() - 1);
    std::cout << "BusquedaBinaria_INV: El valor " << x << " está en la posición " << pos << std::endl;
}

int main() {
    probarBusquedaAscendente();
    probarBusquedaDescendente();
    return 0;
}
