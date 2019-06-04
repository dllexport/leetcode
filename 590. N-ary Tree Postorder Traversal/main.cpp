#include <vector>
#include <cstdio>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node* root) {
        postorderimpl(root);
        return this->res;
    }

    void postorderimpl(Node* root) {
        if (root == nullptr)
            return;

        for (auto i : root->children) {
            postorderimpl(i);
        }

        res.push_back(root->val);
    }

private:
    vector<int> res;
};

int main()
{
}