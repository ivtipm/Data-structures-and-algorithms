# Рекурсия

## Задание 1

Не во всех заданиях рекурсивный алгоритм будет самым эффективным вариантом реализации. Однако, создайте именно такой алгоритм чтобы лучше разобраться в рекурсии. 

Выполните задание согласно варианту.  Вариант = номер_в_списке % число_заданий + 1

Напишите тесты.
В коде программы приводите задание, автора, пишите документирующие комментарии.

Бонус: добавьте в программу интерфейс, использующий аргументы командной строки, для ввода входных данных или параметров их генерации.


Варианты заданий
1. Ввести последовательность чисел (окончание ввода – 0) и вывести их в обратной последовательности. Входные данные взять из текстового файла.


2. Используя команды write(x) лишь при x=0..9, написать рекурсивную программу печати десятичной записи целого положительного числа n. 

3. Напишите рекурсивную функцию, которая возвращает среднее из n элементов массива чисел. 

4. Найти первые N чисел Фибоначчи двумя способами: с помощью рекурсии и с помощью итерации. Сравнить эффективность алгоритмов, измерить  время работы этих функций. 

5. Написать функцию сложения двух чисел, используя только прибавление единицы. 

6. Написать функцию умножения двух чисел, используя только операцию сложения. 

7. Вычислить сумму элементов одномерного массива с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

8. Найти НОД (наибольший общий делитель) двух натуральных чисел. 

9. Вычислить несколько значений функции Аккермана для неотрицательных чисел  m и n:
    ```
                m+1,               n = 0
    A(n, m) = { A(n-1, 1),         n <> 0, m = 0     
                A(n-1 ,A(n,m-1)),  n > 0,  m >= 0
    ```

10. Напишите рекурсивную функцию, которая вычисляет длину строки. 

11. Написать функцию C(m,n) вычисления биномиальных коэффициентов. 

12. Проверить, является ли фрагмент строки с i-го по j-й символ палиндромом. 

13. Вычислить произведение элементов одномерного массива с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

14. Написать процедуру сортировки массива методом простого выбора с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

15. Подсчитать количество цифр в заданном числе с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

16. В текстовом файле задана последовательность положительных чисел, за которой следует отрицательное число. Написать функции для нахождения суммы этих положительных чисел с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

17. Написать функции, которые  подсчитывает количество цифр в тексте , заданном в текстовом файле (за текстом следует точка):
с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 

18. Написать функции определения, является ли заданное натуральное число простым с помощью рекурсии и с помощью итерации. Измерить  время работы этих функций. 


## Размер стека вызовов
Оцените размер стека вызовов на своём компьютере. Создайте отчёт.\
Проверьте, какой размер имеет стек вызовов если компилировать программу вместе с отладочной информацией (режим debug) и без неё (режим release).


## Веб-краулер (web-crawler)
Создайте веб-кроулер на основе рекурсивного алгоритма посещения страниц.
Сохраняйте страницы целиком при посещении или их отдельные части ( заголовки, pdf документы и т.п.).

Рекомендуется использовать библиотеки для работы с динамическим содежимым веб страниц: playwright, selenium.

Предусмотрите возможность задания глубины обхода.

