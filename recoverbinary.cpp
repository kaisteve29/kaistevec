#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int currentMax = INT_MIN;
  TreeNode *firstNode = NULL;
  TreeNode * secondNode = NULL;
  void lnrOrder(TreeNode* root)  {
    if (root == NULL) return ;
    lnrOrder(root->left);

    currentMax = max(currentMax, root->val);

    if(currentMax == root->val) {
      if (secondNode == NULL)
        firstNode = root;
    } else {
      secondNode = root; 
    }
    
    lnrOrder(root->right);
  }

  void recoverTree(TreeNode* root) {
    lnrOrder(root);
    swap(firstNode->val, secondNode->val);
  }
}; 

