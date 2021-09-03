#include <utility>
#include "algorithm"
#include "iostream"
#include "string"
using namespace std;
string ori,res;
bool isOk(string &s){
    for (int i = 0; i < s.size()/2; ++i) {
        if(s[i] != s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}
void add(string &s1,string &s2){
    int jin = 0;
    string result;
    for (int i = (int)s1.size()-1; i >= 0; i--) {
        int sum = s1[i]+s2[i]-'0'-'0'+jin;
        int yu = sum%10;
        jin = sum/10;
        result = to_string(yu).append(result);
    }
    if(jin){
        result = to_string(1).append(result);
    }
    res = result;
}
int main(){
    cin>>ori;
    if(isOk(ori)){
        printf("%s is a palindromic number.\n", ori.c_str());
    } else{
        for (int i = 0; i < 10; ++i) {
            string re = ori;
            reverse(re.begin(),re.end());
            add(re,ori);
            printf("%s + %s = %s\n", ori.c_str(), re.c_str(), res.c_str());
            if(isOk(res)){
                printf("%s is a palindromic number.\n", res.c_str());
                return 0;
            }
            ori = res;
        }
        printf("Not found in 10 iterations.");
    }

}