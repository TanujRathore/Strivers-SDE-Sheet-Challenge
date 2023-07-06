#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
        vector<int> answer;
        stack<TreeNode*> iStack;
        iStack.push(root);
        
        // Note that we add currNode's right child to the stack first.
        while (!iStack.empty()) {
            TreeNode* currNode = iStack.top();
            iStack.pop();
            if (currNode != nullptr) {
                answer.push_back(currNode -> data);
                iStack.push(currNode -> right);
                iStack.push(currNode -> left);
            }
        }
        
        return answer;
}