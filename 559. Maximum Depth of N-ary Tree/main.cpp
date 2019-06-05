#include <vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}
    Node(int _val) : val(_val) {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int maxDepth(Node* root) {
        maxDepthImpl(root);
        return maxdep;
    }


    void maxDepthImpl(Node* root) {

        if (root == nullptr)
            return;

        depth += 1;

        if (depth > maxdep)
            maxdep = depth;
        for(auto i : root->children){
            maxDepthImpl(i);
        }
        depth -= 1;
    }

private:

    int depth = 0;
    int maxdep = 0;
};

int main()
{
    Node* n1 = new Node(1);
    Node* n2 = new Node(3);
    Node* n3 = new Node(2);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);

    n1->children.push_back(n2);
    n1->children.push_back(n3);
    n1->children.push_back(n4);

    n2->children.push_back(n5);
    n2->children.push_back(n6);

    Solution so;
    so.maxDepth(n1);
}