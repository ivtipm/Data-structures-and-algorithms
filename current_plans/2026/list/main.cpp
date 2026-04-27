#include <stddef.h>
#include <iostream>
using namespace std;

/// Узел списка
template <typename E>
struct Node{
  E value;
  Node * next;

  Node(E value1){ value = value1; next = nullptr; }
};

/// Интерфейс (абстрактный класс) для упорядоченных коллекций
/// (Связного списка и динамического массива)
template <typename E>
class OrderedCollection{
    public:
        virtual void push_front( E element ) = 0;
        virtual void push_back( E element ) = 0;
        virtual void insert( E element, size_t index ) = 0;

        virtual E pop_front( ) = 0;             // удалить первый
        virtual E pop_back( ) = 0;              // удалить последний
        virtual E remove( size_t index ) = 0;   // удалить i-й

        /// получить размер (количество элементов)
        virtual size_t get_size() = 0;

        /// Удаление всех элементов
        virtual void clear() = 0;

        virtual E&    get_element(size_t index) = 0;

};

/// Связный список
template <typename E>
class LinkedList : public OrderedCollection<E>{
    Node<E>* head = nullptr;
    Node<E>* tail = nullptr;
    size_t size = 0;

public:
    LinkedList() {}

    void push_front( E element ) override;
    void push_back( E element ) override {};
    void insert( E element, size_t index ) override {};

    E pop_front( ) override {};             // удалить первый
    E pop_back( ) override {};              // удалить последний
    E remove( size_t index ) override {};   // удалить i-й

    /// получить размер (количество элементов)
    size_t get_size() override {};

    /// Удаление всех элементов
    void clear() override {};

    E&    get_element(size_t index) override {};

    Node<E>* get_node( size_t index ) {};

    // вывод писка
    void print_list(){
        Node<E> *current = head;
        while ( current != nullptr){
            cout << current -> value << " ";        // вывод
            current = current->next; // переход к следующему
        }
    }

};

template <typename E>
void LinkedList<E>::push_front( E element )  {
    Node<E>* new_node = new Node<E>( element );
    // если список пуст
    if ( head == nullptr){
        head = new_node;
        tail = new_node;
        size = 1;}
    else {      // если список не пуст
        new_node -> next = head;
        head = new_node;
        size++;
    }

}

int main() {
    LinkedList<int> list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    list.print_list();

    cout << "\n";
    return 0;
}
