#include <iostream>

using namespace  std;


// void print_array( double* arr, size_t n ) {
//     // void  - тип возвращаемого значения, void -- пустой тип, используется тогда, когда функция ничего не возвращает
//     // arr, n -- формальные параметры функции
//     for ( int i = 0; i < n; i++){
//         cout << format("{} ", arr[i]);
//         if ( i % 10 == 9 ) cout << "\n";
//     }
// }


// шаблон функции ( шаблонная функция )
template <typename E>
void print_array( E* arr, size_t n ) {
    // void  - тип возвращаемого значения, void -- пустой тип, используется тогда, когда функция ничего не возвращает
    // arr, n -- формальные параметры функции
    for ( int i = 0; i < n; i++){
        cout << format("{} ", arr[i]);
        if ( i % 10 == 9 ) cout << "\n";
    }
}


int main(){

    size_t N = 90;
    double* arr = new double[N];
    print_array<double>(arr, N);    // вызов шаблонной функции
                                    // вместо шаблонного типа E подставляется double

    int* arr2 = new int[N];
    print_array<int>(arr2, N);       // вызов шаблонной функции

}
