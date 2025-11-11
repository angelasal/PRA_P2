// DyV.h
#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <ctime>



int BusquedaBinaria(int x, std::vector<int>& v, int ini, int fin) {
    if (ini > fin) {
        return -1; // No se encuentra
    }

    int med = (ini + fin) / 2;

    if (v[med] == x) {
        return med;
    } else if (v[med] > x) {
        return BusquedaBinaria(x, v, ini, med - 1);
    } else {
        return BusquedaBinaria(x, v, med + 1, fin);
    }
}

int Partition(std::vector<int>& V, int ini, int fin){
         int x = V[fin]; //pivote
         int i = ini-1;
         int j;
         for(j = ini; j<fin; j++){
               if(V[j]<= x){
                     std::swap(V[i], V[j]);
                     i++;
               }
         }
        std::swap(V[i], V[fin]);
        return i;

}


void QuickSort(std::vector<int>& V, int ini, int fin){
    if(ini < fin){
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1);
        QuickSort(V, pivot + 1, fin);

    }
}


#endif

