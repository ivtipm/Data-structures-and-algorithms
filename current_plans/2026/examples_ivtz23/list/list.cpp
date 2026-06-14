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



class ListIterator;

/// Односвязный список
class LinkedList{
    private:
        ListNode* head = nullptr;         /// указатель на головной элемент списка

    public:

        /// Добавляет значение x в конец списка
        void add_first(int x){
            if ( head == nullptr ){
                head = new ListNode(x, nullptr);
            } else {
                // создаём новый элемент
                ListNode *new_node = new ListNode(x, nullptr);
                // вставляем элемент перед головным (первым)
                new_node->next = head;
                // делаем новый элемент головным (первым)
                head = new_node;
            }

        }

        friend ListIterator;
        // TODO: освобождение памяти и др. методы

};



/// Итератор для односвязного списка
class ListIterator{
    private:

        ListNode*  cur; // указатель на текущий элемент (узел) списка

    public:
        // Конструктор: инициализирует указатель на текущий эл-т первым эл-м списка
        ListIterator( LinkedList& list ){
            cur  = list.head;
        }

        // переход к следующему узлу списка
        void next(){
            cur = cur->next;
        }

        // получение данных из текущего узла списка
        int get_value(){
            return cur->value;
        }

        // проверка: закончился ли список (стоим ли мы на пустом элементе(узле) списка)
        bool is_end(){
            if ( cur == nullptr )
                return true;
            else
                return false;
        }
};




/// Итератор для односвязного списка
///

int main(){

    LinkedList list;
    // 10 20 30 40 50

    list.add_first( 50 );
    list.add_first( 40 );
    list.add_first( 30 );
    list.add_first( 20 );
    list.add_first( 10 );
    list.add_first( 1111 );


    ListIterator it = ListIterator( list );



    while ( not it.is_end() )       // пока итератор не обошел список
    {
        cout << it.get_value() << " " << flush;
        it.next();
    }

    // it.get_value();


    // // вывод списка на экран
    // ListNode* cur = head;
    // while ( cur != nullptr ){       // цикл перебирающий элементы списка до конца
    //     // признак конца списка -- cur == nullptr
    //     cout << cur->value << " ";
    //     cur = cur->next;    // переход на след элемент
    // }
    // // после выполнения цикла: cur = nullptr


    // // освобождение памяти, которую занимает список
    // cur = head;
    // while ( cur != nullptr ){ // цикл перебирающий элементы списка до конца
    //     ListNode* tmp = cur;    // запомнить текущий эл-т
    //     cur = cur->next;    // переход на след элемент
    //     delete tmp;         // освобождение памяти
    // }

    // // ошибочное обращение
    // // cout << cur->value;

    cout << "\n";

}
