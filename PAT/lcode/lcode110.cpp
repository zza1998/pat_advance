#include "iostream"
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
public:
    int dep(TreeNode* root){
        if(root== nullptr) return 0;
        return max(dep(root->left), dep(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        if(abs(dep(root->left) - dep(root->right))>=2){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};