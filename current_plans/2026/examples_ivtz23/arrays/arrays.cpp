#include <iostream>

#include "arrays.h"


using namespace std;


// Объявление функции:
/// функция выводит массив arr размера n на экран, по 10 элементов на строку
/// Сложность -- O(n)
void print_array( double* arr, size_t n ) {
    // void  - тип возвращаемого значения, void -- пустой тип, используется тогда, когда функция ничего не возвращает
    // arr, n -- формальные параметры функции

    for ( int i = 0; i < n; i++){
        cout << format("{:4.1f} ", arr[i]);

        if ( i % 10 == 9 ) cout << "\n";
    }

}

/// O( 1 )
void print_first( double* arr, size_t n ) {
    cout << arr[0];
}

/// O( 1 )
void print_sum( double* arr, size_t n ) {
    cout << arr[0] + arr[n-1];
}
