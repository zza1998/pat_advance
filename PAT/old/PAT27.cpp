//
// Created by 周子安 on 2021/8/3.
//

#include "iostream"
#include "vector"
using namespace std;
char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
void to13jinzhi(int a){
    char res[2] = {'0','0'};
    int yu = a%13;
    a = a/13;
    res[1] = arr[yu];
    yu = a%13;
    res[0] = arr[yu];
    cout<<res[0]<<res[1];
}
int main(){
    int r ,g ,b;
    cin>>r>>g>>b;
    cout<<"#";
    to13jinzhi(r);
    to13jinzhi(g);
    to13jinzhi(b);
}