#include <iostream>

using namespace std;

/// Узел бинарного дерева
template <typename E>
struct TreeNode {
    E value;          // данные
    TreeNode* left;     /// указ. не левого потомка
    TreeNode* right;    /// указ. не правого потомка

    TreeNode(){
        // todo:
         }

    TreeNode(int value1, TreeNode* left1,  TreeNode* right1){
            // todo:
    }

};

/// функция обхода в порядке Left Right Node
/// root -- корень дерева
template <typename E>
void LRN_traverse_print(TreeNode<E>* root){
    if ( root-> left != nullptr)
      LRN_traverse_print( root->left );  // Left -запуск обхода левого поддерева

    if ( root->right != nullptr )
      LRN_traverse_print( root->right ); // Right -запуск обхода прав. поддерева

    cout << root->value << "  ";          // Node - печать значения из узла
}


template <typename E>
TreeNode<E>* find(E target, TreeNode<E> *root){
    // ....
}

/// Бинарное дерево поиска
template <typename E>
class BST{

    TreeNode<E> * root; // корень дерева

    BST(){ /* todo: сделать */}

    TreeNode<E>* find(E target){ /* todo: сделать рекурсивный алгоритм */ }

    void add(E target){ /* todo: сделать рекурсивный алгоритм */ }

    void remove(E target){ /* todo: сделать рекурсивный алгоритм */ }

    void LRN_traverse_print(){
        LRN_traverse_print(root);
    }

    BST<E> copy() {/* todo: сделать */}

    void clear() {/* todo: сделать */}

    long long height() {/* todo: сделать */}

    long long size() {/* todo: сделать */}

    ~BST() { /* todo: сделать */ }

};


int main(){

    // Дерево
    /*              10
     *            /    \
     *           7     17
     *         /   \     \
     *        2     8     80
      */

    // 0 уровень дерева -- корень
    TreeNode<int>* root7 = new TreeNode<int>(10, nullptr, nullptr);

    // 1 уровень дерева
    root7 -> left   = new TreeNode<int>( 7, nullptr, nullptr);
    root7 -> right  = new TreeNode<int>(17, nullptr, nullptr);

    // 2 уровень дерева
     (root7->left) -> left =  new TreeNode<int>( 2, nullptr, nullptr); //(root->left) -- узел (7)
     (root7->left) -> right = new TreeNode<int>( 8, nullptr, nullptr); //(root->left) -- узел (7)

     (root7->right) -> right = new TreeNode<int>(80, nullptr, nullptr); //(root->right) -- узел (17)

     LRN_traverse_print<int>( root7 );





     BST<int> tree;

     tree.add( 10 );
     tree.add( 13 );
     tree.add( 0 );

     TreeNode<E>* target_node = tree.find(8);

}
