#include "iostream"
#include "queue"

using namespace std;

struct Node {
    int left = -1;
    int right = -1;
};
Node nodes[11];
int exits[11];

int flag2 = 0;

void level(int root) {
    queue<int> q;
    q.push(root);

    while (!q.empty()) {
        int num = q.front();
        if (flag2 == 1) {
            cout << " ";
        }
        flag2 = 1;
        cout << num;
        q.pop();
        if (nodes[num].left != -1) {
            q.push(nodes[num].left);
        }
        if (nodes[num].right != -1) {
            q.push(nodes[num].right);
        }
    }
}

int flag = 0;
vector<int> res;
void inorder(int root) {
    if (nodes[root].left != -1) {
        inorder(nodes[root].left);
    }
    if(flag == 1){
        cout<<" ";
    }
    flag = 1;
    cout<<root;
    if (nodes[root].right != -1) {
        inorder(nodes[root].right);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char left, right;
        cin >> left >> right;
        if (left != '-') {
            nodes[i].right = left - '0';
            exits[left - '0'] = 1;
        }
        if (right != '-') {
            nodes[i].left = right - '0';
            exits[right - '0'] = 1;
        }
    }
    int root = 0;
    for (int i = 0; i < n; ++i) {
        if (exits[i] == 0) {
            root = i;
            break;
        }
    }
    level(root);
    cout<<endl;
    inorder(root);
}