#include "iostream"
#include "queue"
using namespace std;
int nums;
struct Node{
    int val, height = 0;
    Node * left,*right;
};
Node* newNode(int val){
    Node *node = new Node;
    node->val = val;
    node->left = node->right = nullptr;
    node->height = 1;
    return node;
}
int getHeight(Node *node){
    if(node == nullptr) return 0;
    return node->height;
}
void updateHeight(Node *&node){
    node->height = max(getHeight(node->left), getHeight(node->right))+1;
}
int getB(Node *&node){
    return getHeight(node->left) - getHeight(node->right);
}
void L(Node *&root){
    Node* tmp = root->right;
    root->right = tmp->left;
    tmp->left = root;
    updateHeight(root);
    updateHeight(tmp);
    root = tmp;
}
void R(Node *& root){
    Node* tmp = root->left;
    root->left = tmp->right;
    tmp->right = root;
    updateHeight(root);
    updateHeight(tmp);
    root = tmp;
}
void insert(Node *&root,int val){
    if(root == nullptr){
        root = newNode(val);
        return;
    }
    if(val<root->val){
        insert(root->left,val);
        updateHeight(root);
        if(getB(root) == 2){
            if(getB(root->left) == 1){
                R(root);
            } else if(getB(root->left) == -1){
                L(root->left);
                R(root);
            }
        }
    } else {
        insert(root->right,val);
        updateHeight(root);
        if(getB(root) == -2){
            if(getB(root->right) == -1){
                L(root);
            } else if(getB(root->right) == 1){
                R(root->right);
                L(root);
            }
        }
    }

};
int treeFlag = 1;
int firstPrint = 0;
void isCompleteTree(Node &root){
    queue<Node> q;
    q.push(root);
    int flag = 0;
    while (!q.empty()){
        int qs = q.size();
        for (int i = 0; i < qs; ++i) {
            Node pNode = q.front();
            q.pop();
            if(firstPrint) cout<<" ";
            cout<<pNode.val;
            firstPrint = 1;
            if(flag && (pNode.left != nullptr || pNode.right != nullptr)){
                treeFlag = 0;
            }
            if(pNode.left == nullptr && pNode.right != nullptr){
                treeFlag = 0;
            }
            if(pNode.left!= nullptr){
                if(flag) treeFlag = 0;
                q.push(*pNode.left);
            }
            if(pNode.right!= nullptr){
                if(flag) treeFlag = 0;
                q.push(*pNode.right);
            }
            if(pNode.right== nullptr){
                flag = 1;
            }
        }
    }
}
int main(){
    cin>>nums;
    Node *root = nullptr;
    for (int i = 0; i < nums; ++i) {
        int xs;cin>>xs;
        insert(root,xs);
    }
    cout<<root->val<<endl;
    isCompleteTree(*root);
    cout<<endl;
    if(treeFlag){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}