#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;
struct Node{
    char code;
    int curr,next;
};
unordered_map<int,int> nm,exsit;
void getPath(int first,vector<int> &v){
    while (first!=-1 && exsit[first]==1){
        v.push_back(first);
        first = nm[first];
    }
}
int main(){
    int first,two,num;
    cin>>first>>two>>num;
    for (int i = 0; i < num; ++i) {
        int form,to;char val;
        cin>>form>>val>>to;
        nm[form] = to;
        exsit[form] = 1;
    }
    vector<int> v1, v2;
    getPath(first,v1);
    getPath(two,v2);
    if(v1.empty() || v2.empty() || v1[v1.size()-1]!=v2[v2.size()-1]){
        cout<<"-1"<<endl;
    } else{
        int i = 0;
        int res ;
        for (; i < v1.size() && i < v2.size(); ++i) {
            if(v1[v1.size()-1-i]!=v2[v2.size()-1-i]){
                break;
            } else{
                res = v1[v1.size()-1-i];
            }
        }
        printf("%05d\n",res);
    }
}