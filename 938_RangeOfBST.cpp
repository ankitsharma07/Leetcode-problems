/*
[low, high]

return sum of the values of nodes in the range
*/

#include <iostream>

// binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}

class Solution {
public:
    int sum = 0;
    void inOrder(TreeNode* root, int low, int high) {
        if(!root){
            return;
        }

        inOrder(root->left, low, high);

        if(root->val > high){
            return;
        }
        else if((root->val >= low) && (root->val <= high)) {
            sum += root->val;
        }
        inOrder(root->right, low, high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root){
            return sum;
        }

        inOrder(root, low, high)
        return sum;
    }
};