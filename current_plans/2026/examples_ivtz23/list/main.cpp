#include <iostream>


using namespace std;

//  объявление типа данных Node
/// Узел односвязного списка
struct ListNode{
    // поля:
    int value;      // данные
    ListNode * next;    // указатель (адрес) на след. эл-т списка

    // конструктор -- специальный метод, который инициализирует поля класса
    // метод -- функция, которая объявлена внутри внутри класса (class) или структуры (struct)

    // конструктор без параметров
    ListNode(){
        value = 0;
        next = nullptr;}

    // конструктор с параметрами
    ListNode(int value1, ListNode* next1){
        value = value1;
        next = next1; }
};

int main(){

    // Создадим головной элемент списка
    ListNode* head = new ListNode(10, nullptr);

    ListNode* new_el = new ListNode(20, nullptr);

    head->next = new_el;

    new_el = new ListNode(30, nullptr);

    // обратимся ко второму элементу (head->next) списка и присоединим к нему новый элемент
    (head->next) -> next = new_el;
    // альтернатива:
    // Node* second = head->next;
    // second -> next = new_el;


    // вывод списка на экран
    ListNode* cur = head;
    while ( cur != nullptr ){       // цикл перебирающий элементы списка до конца
        // признак конца списка -- cur == nullptr
        cout << cur->value << " ";
        cur = cur->next;    // переход на след элемент
    }
    // после выполнения цикла: cur = nullptr


    // освобождение памяти, которую занимает список
    cur = head;
    while ( cur != nullptr ){ // цикл перебирающий элементы списка до конца
        ListNode* tmp = cur;    // запомнить текущий эл-т
        cur = cur->next;    // переход на след элемент
        delete tmp;         // освобождение памяти
    }

    // ошибочное обращение
    // cout << cur->value;

    cout << "\n";

}
