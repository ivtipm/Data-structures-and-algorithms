#include <iostream>
using namespace std;


// Итератор для чисел Фибоначчи
class FibIterator{

    long long f1;   // i   -й элемент последовательности
    long long f2;   // i+1 -й элемент последовательности
    size_t n;       // n -- количество элементов послед-ти
    size_t i;       // количество пройденных эл-в

    public:
        /// Конструктор. n1 -- количество элементов послед-ти
        FibIterator(size_t n1){
            f1 = 1;
            f2 = 1;
            i = 1;
            n = n1;
        }

        /// Переход к след. элементу
        void next(){
            long long f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            i++;
        }

        /// Получение текущего значения
        long long get_value(){
            return f1;
        }

        /// Проверка: есть ли ещё элементы
        bool is_end(){
            return i == n+1;
        }
};

//               i: 1   2   3   4   5   6   7
// чисел Фибоначчи: 1   1   2   3   5   8   13 ...
//                  f1  f2  f3
// //                   f1  f2

int main() {

    FibIterator fi1( 2 );
    cout << fi1.get_value() << " ";
    fi1.next();
    cout << fi1.get_value() << " ";
    fi1.next();
    cout << "\nis_end: " << fi1.is_end();


    cout << "\n\n\n";

    FibIterator fi2( 20 );
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << fi2.get_value() << " ";
    fi2.next();
    cout << "\nis_end: " << fi2.is_end();


    cout << "\n";

}
