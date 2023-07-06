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
void  postOrderTraversal(TreeNode *root ,vector<int> & postOrderTraversall ){
    if(root == NULL) return ; 
    
    postOrderTraversal(root -> left,postOrderTraversall);
    postOrderTraversal(root -> right,postOrderTraversall);
    postOrderTraversall.push_back(root -> data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector <int> postOrderTraversall;
    if(root == NULL){
        return postOrderTraversall;
    }
    postOrderTraversal(root,postOrderTraversall);
    return postOrderTraversall;
}