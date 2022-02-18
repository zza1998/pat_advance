#include "iostream"
using namespace std;
const int N = 1E5;
int pre[N],mid[N];
struct Node{
    int code;
    Node *lnode,*rnode;
};
Node* newNode(int val){
    Node* n = new Node;
    n->code = val;
    n->lnode = n->rnode = nullptr;
    return n;
}
void createTree(Node *&root, int pL,int pR,int mL,int mR){
    if(pL>pR || mL>mR){
        return;
    }
    int node = pre[pL];
    root = newNode(node);
    int i = mL;
    int len = 0;
    for (; i <= mR; ++i) {
        if(mid[i]==node){
            len = i-mL;
            break;
        }
    }
    createTree(root->lnode,pL+1,pL+len,mL,mL+len-1);
    createTree(root->rnode,pL+len+1,pR,mL+len+1,mR);
}
int flag = 0;
void postVisited(Node *&root){
    if(root == nullptr){
        return;
    }
    postVisited(root->lnode);
    postVisited(root->rnode);
    if(flag) return;
    cout<<root->code;
    flag = 1;
}
int main(){
    int num; cin>>num;
    for (int k = 0; k < num; ++k) {
        cin>>pre[k];
    }
    for (int i = 0; i < num; ++i) {
        cin>>mid[i];
    }
    Node *root;
    createTree(root,0,num-1,0,num-1);
    postVisited(root);
}