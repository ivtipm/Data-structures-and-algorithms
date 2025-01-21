# День 1
21 января 2025
## Лекции.
1. Повторение основ С++. Указатели, массивы статические и динамические, экспоненциальная запись числа, функции, передача значений по ссылке и по значению, заголовочные и cpp файлы, текстовые файлы. [raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf](https://raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf)
2. Автоматическое тестирование. Assert; [raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf](https://raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf#subsection.2.2.6)
3. Отладка.
4. Рекурсия. Рекурсивная и терминальная ветви.
5. Сортировки. [[Источники](https://github.com/ivtipm/Data-structures-and-algorithms#%D1%81%D1%81%D1%8B%D0%BB%D0%BA%D0%B8),1,3]
   - Слайды: https://docs.google.com/presentation/d/1YEXijE-L6xtoXNAgLldPDsw_skUCQwc7e4XA5dC0obk/edit?usp=sharing 
7. Списки. [1, глава 9]

Задания: https://docs.google.com/document/d/15TVDKgrKid6SX0cZeROzqIdLHWGQGLGc_9DpESdL9Gc/edit?usp=sharing

## Практики
Используйте язык программирования С++, C# или Java
# День 2

## Лекции.
1. Шаблонные функции и классы. [OOP_StudBook.pdf#2.3](https://raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf#section.2.3), [OOP_StudBook.pdf#4.4](https://raw.githubusercontent.com/VetrovSV/OOP/master/OOP_StudBook.pdf#section.4.4)
2. АТД. Стек. Очередь. Дек. Очередь с приоритетами. [1, глава 5]
3. Множество. 
4. Стековый калькулятор. [1, глава 5]

## Практики
0. Защита работ
1. Реализуйте шаблонный класс Стек. Для хранения данных используйте массив или связный список.
2. Напишите тесты для класса.
3. Реализуйте калькулятор для префиксных выражений. Напишите тесты для него.

**Пример разделения строки на части, разделённые пробелами**

```C++
#include <sstream>      // stringstream

   string text = "В день тридцатилетия личной жизни Вощеву\
      дали расчет с небольшого механического завода,\
      где он добывал средства для своего существования.";

   stringstream ss(text);        // объект для обработки строк

   string word;
   // чтение из строкового потока по словам (разделены пробелами)
   while (ss >> word) { 
      cout << word << endl;
   }
   ```

Вывод
<details>

```text
В
день
тридцатилетия
личной
жизни
Вощеву
дали
расчет
с
небольшого
механического
завода,
где
он
добывал
средства
для
своего
существования.
```

<details>

# День 3
## Практика. Защита работ

## Зачёт. Собеседование
1. Абстрактный тип данных. ADT- формат. Пример.
2. Коллекции данных.
3. Алгоритмы. Модели алгоритмов.
4. Сложность алгоритмов. Big – O.
5. Рекурсия. Типы рекурсий. Построение рекурсивных функций.
6. Алгоритмы поиска. Примеры.
7. Алгоритмы сортировки: вставками, пузырьковая. Big – O.
8. Сортировка выбором. Быстрая сортировка. Big – O.
9. ADT – списка. Односвязанные списки.
10. ADT – списка. Двусвязанные списки.
11. ADT – списка на базе массива.
12. Класс SeqList. Реализация методов вставки.
13. ADT – Node. Класс Node. Реализация метода InsertAt.
14. ADT – LinkedList.
15. Реализация методов LinkedList: InsertRear, InsertFront, DeleteFront.
16. Способы задания алгоритмов. Основные свойства алгоритма.
17. ADT – Дек.
18. Множество. ADT – множество.
19. Алгоритмы поиска подстроки в строке.
