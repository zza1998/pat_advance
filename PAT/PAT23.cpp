#include <map>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    int ori[20] = {0,0,0,0,0,0,0,0,0,0}, las[20] = {0,0,0,0,0,0,0,0,0,0,0};
    int up = 0;
    vector<int>v1;
    for (int i = 0; i < s.size(); ++i) {
        ori[s[i] - '0'] ++;
    }
    int dup = false;
    for (int i = s.size()-1; i >= 0; i--) {
        int num = (s[i]-'0')*2+up;
        up = num/10;
        num %=10;
        v.push_back(num);
        las[num]++;
    }
    if(up==1){
        v.push_back(up);
        las[up]++;
    }
    for (int i = 0; i < 10; ++i) {
        if(ori[i]!=las[i]){
            dup = true;
            break;
        }
    }
    !dup?cout<<"Yes"<<endl:cout<<"No"<<endl;
    for (int i = v.size()-1; i >= 0; i--) {
        cout<<v[i];
    }
}