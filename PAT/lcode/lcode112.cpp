#include "iostream"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool res = false;
void findWay(TreeNode* root,int targetSum,int curr){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr){
        if(curr + root->val == targetSum){
            res = true;
        }
        return;
    }
    if(res) return;
    findWay(root->left,targetSum,curr+root->val);
    findWay(root->right, targetSum,curr+root->val);
}
bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == nullptr) return false;
    findWay(root,targetSum,0);
    return res;
}
int main(){

}