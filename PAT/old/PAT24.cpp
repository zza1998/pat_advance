#include "iostream"
using namespace std;
string addS(string &s1, string &s2){
    string res;
    int jin = 0;
    for (int i = (int)s1.size()-1; i>=0; i--) {
        int l = s1[i] + s2[i] + jin - '0' - '0';
        int cc = l%10;
        jin = l/10;
        res = to_string(cc).append(res);
    }
    if(jin){
        res = to_string(1).append(res);
    }
    return res;
}
int main(){
    string s;int time;
    cin>>s>>time;
    int flag = 0;
    for (int j = 0; j < s.size()/2; ++j) {
        if(s[j]!=s[s.size()-1-j]){
            flag =1 ;
            break;
        }
    }
    if(flag == 0){
        cout<<s<<endl<<0<<endl;
        return 0;
    }
    for (int i = 1; i <= time; ++i) {
        string s2 = s;
        for (int j = 0; j < s2.size()/2; ++j) {
            swap(s2[j],s2[s2.size()-1-j]);
        }
        s = addS(s,s2);
        flag = 0;
        for (int j = 0; j < s.size()/2; ++j) {
            if(s[j]!=s[s.size()-1-j]){
                flag =1 ;
                break;
            }
        }
        if(flag == 0){
            cout<<s<<endl<<i<<endl;
            return 0;
        }
    }
    cout<<s<<endl<<time<<endl;
}