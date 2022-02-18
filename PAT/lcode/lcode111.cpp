


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include "iostream"
#include "queue"
using namespace std;

int minDepth(TreeNode *root) {
    if(root == nullptr) return 0;
    queue<TreeNode> q;
    q.push(*root);
    TreeNode tmpLast;
    int layer = 1;
    TreeNode last = *root;
    while (!q.empty()){
        TreeNode node = q.front();
        q.pop();
        if(node.left!= nullptr){
            q.push(*node.left);
            tmpLast = *node.left;
        }
        if(node.right!= nullptr){
            q.push(*node.right);
            tmpLast = *node.right;
        }
        if(node.left== nullptr && node.right == nullptr){
            return layer;
        }
        if(node.val == last.val && node.left == last.left && node.right == last.right){
            layer ++;
            last = tmpLast;
        }
    }
    return layer;
}
int minDepth1(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    // null节点不参与比较
    if (root->left == nullptr && root->right != nullptr) {
        return 1 + minDepth(root->right);
    }
    // null节点不参与比较
    if (root->right == nullptr && root->left != nullptr) {
        return 1 + minDepth(root->left);
    }

    return 1 + min(minDepth(root->left), minDepth(root->right));
}