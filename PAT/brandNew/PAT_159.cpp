#include "iostream"
#include "vector"
#include "sstream"
#include "map"
#include "set"

using namespace std;
set<int> node_set;
struct Node {
    int val;
    Node *left, *right,*parent;
};
int post[40], mid[40];

Node *newNode(int val) {
    Node *node = new Node;
    node->val = val;
    node->left = nullptr;
    node->right = nullptr;
    node->parent = nullptr;
    return node;
}

bool isFull(Node *&root) {
    if (root == nullptr) {
        return true;
    }
    if (root->right == nullptr && root->left == nullptr) {
        return true;
    }
    if (root->left != nullptr && root->right != nullptr) {
        return isFull(root->left) && isFull(root->right);
    }
    return false;

}

map<int, Node *> m;

bool findNode(Node *&root, int val) {
    if (m.count(val) != 0) return true;
    if (root == nullptr) return false;
    if (root->val == val) {
        m[val] = root;
    }
    findNode(root->left, val);
    findNode(root->right, val);
}
int lay_res = -1;
void layers(Node *& root,int val,int lay){
    if(root== nullptr)return;
    if(root->val == val){
        lay_res = lay;
        return ;
    }
    if(lay_res!=-1) return;
    layers(root->left,val,lay+1);
    layers(root->right,val,lay+1);
}
void build(int pl, int pr, int ml, int mr, Node *&root,Node *& pnode) {
    if (pl > pr || ml > mr) {
        return;
    }
    root = newNode(post[pr]);
    root->parent = pnode;
    int len = 0;
    for (int i = ml; i <= mr; ++i) {
        if (mid[i] == post[pr]) {
            len = i - ml;
            break;
        }
    }
    build(pl, pl + len - 1, ml, ml + len - 1, root->left,root);
    build(pl + len, pr - 1, ml + len + 1, mr, root->right,root);
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> post[i];
        node_set.insert(post[i]);
    }
    for (int i = 0; i < N; ++i) {
        cin >> mid[i];
    }
    Node *root;
    Node *pp = nullptr;
    build(0, N - 1, 0, N - 1, root, pp);

    int t;cin >> t;
    getchar();
    for (int i = 0; i < t; ++i) {
        string cmd;
        getline(cin, cmd);
        stringstream ss;
        ss << cmd;
        vector<string> v;
        while (!ss.eof()) {
            string val;
            ss >> val;
            v.push_back(val);
        }
        if (v.size() == 4) {
            string res = root->val == stoi(v[0]) ? "Yes" : "No";
            cout << res << endl;
        } else if (v.size() == 5) {
            if (v[3] == "full") {
                string out = isFull(root) ? "Yes" : "No";
                cout << out << endl;
            } else {
                int l = stoi(v[0]);
                int r = stoi(v[2]);
                if(node_set.count(l)==0||node_set.count(r)==0){
                    cout<<"No"<<endl;continue;
                }
                findNode(root,l);
                findNode(root,r);
                Node *rn = m[r],*lr = m[l];
                if(rn->parent == nullptr || lr->parent == nullptr){
                    cout<<"No"<<endl;continue;
                }
                if(rn->parent->val == lr->parent->val){
                    cout<<"Yes"<<endl;
                } else{
                    cout<<"No"<<endl;
                }
            }
        } else if (v.size() == 6) {
            int p = stoi(v[0]);
            int c = stoi(v[5]);
            if(node_set.count(p)==0||node_set.count(c)==0){
                cout<<"No"<<endl;continue;
            }
            findNode(root, p);
            Node *n = m[p];
            if (n != nullptr && n->left != nullptr && n->left->val == c) {
                cout << "Yes" << endl;
                continue;
            }
            if (n != nullptr && n->right != nullptr && n->right->val == c) {
                cout << "Yes" << endl;
                continue;
            }
            cout << "No" << endl;

        } else if (v.size() == 7) {
            int p = stoi(v[6]);
            int c = stoi(v[0]);
            if (node_set.count(p)==0||node_set.count(c)==0){
                cout<<"No"<<endl;
                continue;
            }
            string res;
            findNode(root,p);
            Node* pn= m[p];
            if(v[3] == "left"){
                if(pn->left!= nullptr&&pn->left->val==c){
                    cout<<"Yes"<<endl;
                } else{
                    cout<<"No"<<endl;
                }
            } else{
                if(pn->right!= nullptr&&pn->right->val==c){
                    cout<<"Yes"<<endl;
                } else{
                    cout<<"No"<<endl;
                }
            }
        } else if(v.size()==8){
            int l = stoi(v[0]);
            int r = stoi(v[2]);
            if(node_set.count(l)==0||node_set.count(r)==0){
                cout<<"No"<<endl;
                continue;
            }
            layers(root,l,1);
            l = lay_res;
            lay_res = -1;
            layers(root,r,1);
            r=lay_res;
            lay_res=-1;
            if(l==r){
                cout<<"Yes"<<endl;
            } else{
                cout<<"No"<<endl;
            }
        }
        ss.clear();
    }
}