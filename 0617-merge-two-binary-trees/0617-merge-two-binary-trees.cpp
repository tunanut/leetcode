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
    void check(TreeNode* r1,TreeNode* r2,TreeNode* r3)
    {
        TreeNode* r1l=0,*r1r=0,*r2l=0,*r2r=0;
        if(r1)
        {
            r3->val+=r1->val;
            r1l=r1->left;
            r1r=r1->right;
        }
        if(r2)
        {
            r3->val+=r2->val;
            r2l=r2->left;
            r2r=r2->right;
        }
        if(r1l||r2l)
        {
            r3->left=new TreeNode();
            check(r1l,r2l,r3->left);
        }
        if(r1r||r2r)
        {
            r3->right=new TreeNode();
            check(r1r,r2r,r3->right);
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1&&!root2)
            return 0;
        TreeNode* r=new TreeNode();
        check(root1,root2,r);
        return r;
    }
};