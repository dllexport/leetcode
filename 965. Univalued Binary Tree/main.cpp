#include <iostream>
#include <set>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        traval(root);
        return unique_int.size() == 1;
    }

    void traval(TreeNode* root){
        if (root == nullptr)
            return;
        traval(root->left);
        unique_int.emplace(root->val);
        traval(root->right);
    }

private:
    std::set<int> unique_int;
};