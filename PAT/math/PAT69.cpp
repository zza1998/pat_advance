//
// Created by 周子安 on 2021/8/20.
//

#include "iostream"
#include "algorithm"
using namespace std;
int main(){
    int m;cin>>m;
    while (true){
        string s1 = string(4 - to_string(m).size(),'0').append(to_string(m));
        sort(s1.begin(),s1.end());
        string s2 = s1;
        for (int i = 0; i < s2.size()/2; ++i) {
            swap(s2[i],s2[s2.size()-1-i]);
        }
        int result = stoi(s2) - stoi(s1);
        cout<<s2<<" - "<<s1<<" = ";
        printf("%04d\n",result);
        if(result == 0 || result == 6174){
            break;
        }
        m = result;
    }
}