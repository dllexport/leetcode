/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        preOrderTraval(root);
        for(auto i : arr) {
            printf("%x ", i);
        }
        return makeTree();
    }

    void preOrderTraval(TreeNode* root) {
        if(!root) return;
        preOrderTraval(root->left);
        arr.push_back(root->val);
        preOrderTraval(root->right);
    }

    TreeNode* makeTree(){
        res = new TreeNode(arr[0]);
        auto p = res;
        for(int i = 1; i < arr.size(); i++){
            auto node = new TreeNode(arr[i]);
            p->right = node;
            p = p->right;
        }
        return res;
    }
private:
    std::vector<int> arr;
    TreeNode* res;
};