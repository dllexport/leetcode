#include <stdio.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {

public:

    int sum = 0;

    void rangeSumBSTImpl(TreeNode* root, int L, int R)
    {
        if (root == nullptr) return;

        rangeSumBSTImpl(root->left, L, R);
        [&, this](){
            if (root->val >= L && root->val <= R)
                this->sum += root->val;
        }();
        rangeSumBSTImpl(root->right, L, R);

    }

    int rangeSumBST(TreeNode* root, int L, int R) {
        rangeSumBSTImpl(root, L, R);
        return sum;
    }
};

int main()
{

}