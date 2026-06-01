#include <iostream>

#include "arrays.h"


using namespace std;


// Объявление функции:
/// функция выводит массив arr размера n на экран, по 10 элементов на строку
void print_array( double* arr, size_t n ) {
    // void  - тип возвращаемого значения, void -- пустой тип, используется тогда, когда функция ничего не возвращает
    // arr, n -- формальные параметры функции

    for ( int i = 0; i < n; i++){
        cout << format("{:4.1f} ", arr[i]);

        if ( i % 10 == 9 ) cout << "\n";
    }

}
