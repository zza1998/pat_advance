#include "iostream"
#include "vector"
#include "map"
using namespace std;
int N , K;
int edge[2500][2500];
int values[2500];
bool visited[2500];
map<string ,int> result;
map<int,string> mapString;
map<string ,int> mapInt;
vector<int> users;
int allIndex = -1;
int getIndex(string &index){
    if(mapInt.find(index)!=mapInt.end()){
        return mapInt[index];
    }
    allIndex ++;
    mapString[allIndex] = index;
    mapInt[index] = allIndex;
    return allIndex;

}
void travel(int curr){
    if(visited[curr]){
        return;
    }
    visited[curr] = true;
    users.push_back(curr);
    for (int i = 0; i < N; ++i) {
        if(edge[curr][i]!=0 && !visited[i]){
            travel(i);
        }
    }
}
void judge(){
    fill(visited,visited+allIndex, false);
    for (int k = 0; k < N; ++k) {
        if(!visited[k]){
            users.clear();
            travel(k);
            if(users.size()>2){
                int maxN = -1,index,sumValue=0;
                for (int i = 0; i < users.size(); ++i) {
                    if(values[users[i]]>maxN){
                        maxN = values[users[i]];
                        index = users[i];
                    }
                    sumValue+=values[users[i]];
                }
                if(sumValue/2>K){
                    string ss = mapString[index];
                    result[ss] = (int)users.size();
                }
            }
        }
    }
}
int main(){
    cin>>N>>K;
    for (int i = 0; i < N; ++i) {
        string from,to;
        int wight;
        cin>>from>>to>>wight;
        edge[getIndex(from)][getIndex(to)] += wight;
        edge[getIndex(to)][getIndex(from)] += wight;
        values[getIndex(from)] += wight;
        values[getIndex(to)] += wight;
    }
    N = allIndex+1;
    judge();
    cout<<result.size()<<endl;
    if(result.empty()){
       // cout<<endl;
    }else{
        for(auto item: result){
            cout<<item.first<<" "<<item.second<<endl;
        }
    }



}