
/// Узел бинарного дерева
struct TreeNode{
    int value;          // данные
    TreeNode* left;     /// указ. не левого потомка
    TreeNode* right;    /// указ. не правого потомка

    TreeNode(){
        value = 0; left = nullptr; right = nullptr; }

    TreeNode(int value1, TreeNode* left1,  TreeNode* right1){
        value = value1; left = left1; right = right1;
    }

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
    TreeNode* root = new TreeNode(10, nullptr, nullptr);

    // 1 уровень дерева
    root -> left   = new TreeNode( 7, nullptr, nullptr);
    root -> right  = new TreeNode(17, nullptr, nullptr);

    // 2 уровень дерева
     (root->left) -> left =  new TreeNode( 2, nullptr, nullptr); //(root->left) -- узел (7)
     (root->left) -> right = new TreeNode( 8, nullptr, nullptr); //(root->left) -- узел (7)

     (root->right) -> right = new TreeNode(80, nullptr, nullptr); //(root->right) -- узел (17)

}
