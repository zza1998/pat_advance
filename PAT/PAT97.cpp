#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
struct Node{
    int value;
    int next,curr;
} nodes[100010];
int main(){
    unordered_map<int,int> m;
    vector<Node> vv, rem;
    int first, num;
    cin>>first>>num;
    for (int i = 0; i < num; ++i) {
        Node node{};
        cin>>node.curr>>node.value>>node.next;
        nodes[node.curr] = node;
    }
    Node f = nodes[first];

    while (true){
        if(m[abs(f.value)]!=1){
            vv.push_back(f);
            m[abs(f.value)] = 1;
        } else{
            rem.push_back(f);
        }
        if(f.next == -1){
            break;
        } else{
            f = nodes[f.next];
        }
    }
    for (int k = 0; k < vv.size()-1; ++k) {
        printf("%05d %d %05d\n",vv[k].curr,vv[k].value,vv[k+1].curr);
    }
    printf("%05d %d -1\n",vv[vv.size()-1].curr,vv[vv.size()-1].value);
    if(!rem.empty()){
        for (int i = 0; i < rem.size()-1; ++i) {
            printf("%05d %d %05d\n",rem[i].curr,rem[i].value,rem[i+1].curr);
        }
        printf("%05d %d -1\n",rem[rem.size()-1].curr,rem[rem.size()-1].value);
    }
}