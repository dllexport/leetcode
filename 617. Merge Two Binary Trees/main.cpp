
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct MyTreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    MyTreeNode(int x, TreeNode* l, TreeNode* r) : val(x), left(l), right(r) {}
};

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

    if (t1 == nullptr){
        return t2;
    } else if (t2 == nullptr){
        return t1;
    }

    return (TreeNode*)new MyTreeNode (t1->val + t2->val, mergeTrees(t1->left, t2->left), mergeTrees(t1->right, t2->right));

}
