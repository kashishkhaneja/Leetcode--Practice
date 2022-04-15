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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        if(root == NULL)
            return root;
        
        //Checking root's value, should lie within the range
        if(root->val >= low && root->val<= high)
        {
            root->left = trimBST(root->left,low,high);
            root->right = trimBST(root->right,low,high);
            return root;
        }
        
        //If root value is less than or more than the given limit
        if(root->val <low)
            return trimBST(root->right, low, high);
        
        else
            return trimBST(root->left, low, high);
    }
};