#include "iostream"
using namespace std;
bool isAdditiveNumber(string num);

int main(){
    isAdditiveNumber("12122436");
}
bool judge (long f2,long f3,int x,string &num,long left){
    while (left<=x-1){
        long sum = f2+f3;
        string s_sum = to_string(sum);
        f2=f3;f3=sum;
        if(num.substr(left,s_sum.size()) != s_sum){
            return false;
        } else{
            left += (int)s_sum.size();
        }
    }
    return true;
}
bool isAdditiveNumber(string num) {
    int x = (int)num.size();
    if(x<3) return false;
    long f2, f3, left;
    for (int i = 2; i < x; ++i) {
        for (int j = 1; j < i; ++j) {
            string ax = num.substr(0,j);
            string bx = num.substr(j,i-j);
            if(ax[0] == '0'&&  ax.size()>1 )continue;
            if(bx[0] == '0' && bx.size()>1) continue;;
            long a = stol(ax);
            long b = stol(bx);
            string sum = to_string(a+b);
            if(sum == num.substr(i,sum.size())){
                f2 = b , f3 = a+b;
                left = i+ (int)sum.size();
                if(judge(f2,f3,x,num,left)){
                    return true;
                }
            }
        }
    }
    return false;
}