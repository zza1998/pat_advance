#include "iostream"
using namespace std;
int main(){
    char s[1], min[100010],s2[10010];
    // +1.23400E-03
    scanf("%[^0-9]",s);
    if(s[0] == '-'){
        cout<<"-";
    }
    char d;
    scanf("%c",&d); // 获取单个字符
    int f = d-'0';
    getchar();
    scanf("%[^E]",min);
    getchar();
    scanf("%[^\n]",s2);
    getchar();
    if(s2[0] == '-'){
        int i1 = abs(stoi(s2));
        cout<<"0."<<string(i1-1,'0')<<f<<min;
    } else{
        int i1 = stoi(s2);
        cout<<f;
        int index = 0;
        for (; index < i1; index++) {
            if(min[index] == '\0'){
                cout<<"0";
            } else{
                cout<<min[index];
            }
        }
        string v = min;
        if(index < v.size()){
            cout<<".";
            cout<<v.substr(index);
        }
    }
}