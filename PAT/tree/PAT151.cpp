#include "iostream"
#include "map"
#include "unordered_map"

using namespace std;
int mid[10100], pre[10100];
unordered_map<int, int> nums, placeMap;
struct Node {
    int data;
    int place;
    Node *lnode, *rnode;
};

Node *newNode(int data, int place) {
    Node *node = new Node;
    node->rnode = node->lnode = nullptr;
    node->data = data;
    node->place = place;
    return node;
}

void createNode(Node *&node, int pl, int pr, int ml, int mr) {
    if (ml > mr || pl > pr) {
        return;
    }
    int val = pre[pl];
    node = newNode(val, placeMap[val]);
    int i = ml, len = 0;
    for (; i <= mr; ++i) {
        if (mid[i] == val) {
            len = i - ml;
            break;
        }
    }
    createNode(node->lnode, pl + 1, pl + len, ml, i - 1);
    createNode(node->rnode, pl + len + 1, pr, i + 1, mr);
}
int findCommon(int ia,int ib,Node *&curr){
    if((ia - curr->place)*(ib-curr->place) <=0){
        return curr->data;
    }
    if(ia<curr->place && ib<curr->place){
        return findCommon(ia,ib,curr->lnode);
    } else{
        return findCommon(ia,ib,curr->rnode);
    }

}
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        cin >> mid[i];
        nums[mid[i]] = 1;
        placeMap[mid[i]] = i;
    }
    for (int i = 0; i < n; ++i) { cin >> pre[i]; }
    Node *root;
    createNode(root, 0, n - 1, 0, n - 1);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        if (nums[a] == 0 && nums[b] == 0) {
            printf("ERROR: %d and %d are not found.\n", a, b);
        } else if (nums[a] == 0 || nums[b] == 0) {
            printf("ERROR: %d is not found.\n", nums[a] == 0 ? a : b);
        } else {
            int aIndex = placeMap[a];
            int bIndex = placeMap[b];
            int common = findCommon(aIndex,bIndex,root);
            if (common == b || common == a) {
                printf("%d is an ancestor of %d.\n", common == b ? b : a, common == b ? a : b);
                continue;
            }
            printf("LCA of %d and %d is %d.\n", a, b, common);
        }
    }
}