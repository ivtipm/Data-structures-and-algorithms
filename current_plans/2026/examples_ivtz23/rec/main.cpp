#include <stddef.h>
#include <cassert>


// рекурсивная функция для вычисления факториала
size_t factorial( size_t n ){
    if ( n == 0 ) return 1;
    if ( n == 1 ) return 1;
    else{
        // рекурсивный вызов
        return n * factorial(n-1);
    }

}


int main(){
    // тесты
    assert (  factorial(0) ==   1 ) ;
    assert (  factorial(1) ==   1 ) ;
    assert (  factorial(5) == 120 ) ;
}
