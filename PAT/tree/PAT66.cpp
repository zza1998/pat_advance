#include "iostream"
using namespace std;
struct Node{
    int val,height;
    Node* left, *right;
};
Node* newNode(int val){
    Node *node = new Node;
    node->val = val;
    node->left= node->right = nullptr;
    node->height = 1; // 1;
    return node;
}
int getHeight(Node *&node){
    if (node == nullptr) return 0;
    return max(getHeight(node->left), getHeight(node->right))+1;
}
void updateHeight(Node *& node){
    node->height = getHeight(node);
}
int getBalance(Node *&node){
    return getHeight(node->left) - getHeight(node->right);
}
void L(Node *&root){
    Node *tmp = root->right;
    root->right = tmp->left;
    tmp->left = root;
    updateHeight(root);
    updateHeight(tmp);
    root = tmp;
}
void R(Node *&root){
    Node *tmp = root->left;
    root->left = tmp->right;
    tmp->right = root;
    updateHeight(root);
    updateHeight(tmp);
    root = tmp;
}
void insertNode(Node *& root,int val){
    if(root == nullptr){
        root = newNode(val);
        return;
    }
    if(val<root->val){
        insertNode(root->left,val);
        updateHeight(root);
        if(getBalance(root) == 2){
            if(getBalance(root->left) == 1){
                R(root);
            } else if(getBalance(root->left) == -1){
                L(root->left);
                R(root);
            }
        }
    } else{
        insertNode(root->right,val);
        updateHeight(root);
        if(getBalance(root) == -2){
            if(getBalance(root->right) == -1){
                L(root);
            } else if(getBalance(root->right) == 1){
                R(root->right);
                L(root);
            }
        }
    }
}

int main(){
    int nums;cin>>nums;
    Node* root = nullptr;
    for (int i = 0; i < nums; ++i) {
        int x;cin>>x;
        insertNode(root,x);
    }
    cout<<root->val<<endl;
}