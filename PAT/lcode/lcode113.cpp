#include "iostream"
#include "vector"

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<vector<int>> res;
int target;
void findWay(vector<int> &path, TreeNode *root, int curr) {
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr){
        if(curr == target){
            res.push_back(path);
        }
        return;
    }
    if(root->left!= nullptr){
        path.push_back(root->left->val);
        findWay(path,root->left,curr+root->left->val);
        path.pop_back();
    }
    if(root->right!= nullptr){
        path.push_back(root->right->val);
        findWay(path,root->right,curr+root->right->val);
        path.pop_back();
    }

}

vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
    if(root == nullptr) return res;
    target = targetSum;
    vector<int >v;
    v.push_back(root->val);
    findWay(v,root,root->val);
    return res;
}
