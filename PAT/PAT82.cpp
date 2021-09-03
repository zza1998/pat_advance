#include "iostream"
using namespace std;
int af(const string &s,int p){
    for (int i = p+1; i < s.size(); ++i) {
        if (s[i] != '0'){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
    string nums[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string jin[] = {"","Shi","Bai","Qian","Wan","Shi","Bai","Qian","Yi"};
    int first = 1;
    if(num<0){
        cout<<"Fu";
        first = 0;
    }
    // -123456789
    // Fu yi Yi er Qian san Bai si Shi wu Wan liu Qian qi Bai ba Shi jiu
    // 100800
    // yi Shi Wan ling ba Bai
    string sn = to_string(abs(num));
    for (int i = 0 ; i < sn.size(); ++i) {
        if(sn[i] != '0' || (sn[i] == '0' && af(sn,i))) {
            if(first){
                first = 0;
            } else{
                cout<<" ";
            }
            cout<<nums[sn[i] - '0'];
        }
        if(i == sn.size()-1) break;
        if(sn[i] != '0' || sn.size()-i-1 == 4 ||sn.size()-i-1 == 8){
            if(first){
                first = 0;
            } else{
                cout<<" ";
            }
            cout<<jin[sn.size()-i-1];
        }
    }



}