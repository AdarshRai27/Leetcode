/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==nullptr)return 0;
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        bool leftans=isBalanced(root->left);
        bool rightans=isBalanced(root->right);
        bool diff;
        if(abs(height(root->left)-height(root->right))<=1)diff=true;
        else diff=false;
        if(leftans&&rightans&&diff)return true;
        else return false;
        
    }
};