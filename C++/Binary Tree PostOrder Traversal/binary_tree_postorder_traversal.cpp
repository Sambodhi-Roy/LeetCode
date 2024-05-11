/*
144. Binary Tree PostOrder Traversal

Given the root of a binary tree, return the postorder traversal of its nodes' values.

Example 1:
    1
     \
       2
     /
   3

Input: root = [1,null,2,3]
Output: [3,2,1]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]

*/

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     createNode(int val) = {Creates a node with left and right children as NULL 
 *                           and a value as passed in argument val}
 * };
 */

struct TreeNode
{
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode * createNode(int val)
{
  struct TreeNode *n;
  n = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  n->left = NULL;
  n->right = NULL;
  n->val = val;

  return n;
}

class Solution 
{
public:
    vector<int> r;
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(root!=NULL)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            r.emplace_back(root->val);
        }
        return r;
    }
};

int main()
{
  Solution obj;
  // Creating the tree as given in Example 1
  struct TreeNode *root =createNode(1);
  struct TreeNode *p1 = createNode(2);
  struct TreeNode *p2 = createNode(3);

  root->right=p1;
  p1->left=p2;

  vector<int> v1=obj.postorderTraversal(root);

  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }

  return 0;
}