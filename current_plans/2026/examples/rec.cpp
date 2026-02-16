/**
 * Вычислить факториал
 *
 */

// 5! = 1*2*3*4*5;
// 5! = 4! * 5;

#include <iostream>
#include <cassert>
using namespace std;


/// Вычисляет факториал числа n
 long long fact(long long n){
     if ( (n == 0) || (n == 1) ) {  //терминальная ветвь
         return 1;
     }
     else { // рекурсивная ветвь
         return fact(n-1) * n;
     }
 }


 int main(){
    assert( fact(0) == 1);
    assert( fact(1) == 1);
    assert( fact(3) == 6);

    assert( fact(9) == 362880);
 }
