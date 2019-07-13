#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> res;
        vector<int> inRes;
        if (root == nullptr)
        {
            return res;
        }
        nodeQueue.push(root);

        int levelCount = 1;
        while (!nodeQueue.empty())
        {

            int count = 0;
            for (int i = 1; i <= levelCount; i++)
            {
                auto node = nodeQueue.front();
                nodeQueue.pop();
                for (auto c : node->children)
                {
                    nodeQueue.push(c);
                    count++;
                }
                inRes.push_back(node->val);
            }
            res.push_back(inRes);
            inRes.clear();
            levelCount = count;
        }

        return res;
    }

private:
    queue<Node *> nodeQueue;
};

int main()
{
    auto n5 = new Node(5, vector<Node *>());
    auto n6 = new Node(6, vector<Node *>());

    auto n3 = new Node(3, {n5, n6});
    auto n2 = new Node(2, vector<Node *>());
    auto n4 = new Node(4, vector<Node *>());
    auto n1 = new Node(1, {n3, n2, n4});
    Solution so;
    so.levelOrder(n5);
}
