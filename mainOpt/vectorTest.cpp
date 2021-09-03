#include "vector"
#include "iostream"
using namespace std;

void printNums(const vector<int>& num){
    for (const int & a : num) {
        cout<< a << " ";
    }
    cout<<endl;
}
bool cmpNew(int &n1,int &n2){
    return n1>n2;
}
int main(){
    vector<int> num = vector<int>(10) ;
    for (int i = 0; i < 10; ++i) {
        num.push_back(i);
    }
    printNums(num);

    // 获取容量
    cout<<"查看容量"<<endl;
    cout<<num.capacity()<<endl;

    // 反转数组
    cout<<"反转数组后"<<endl;
    reverse(num.begin(),num.end());
    printNums(num);

    // 移除末尾数据
    for (int i = 0; i < 5; ++i) {
        num.pop_back();
    }
    cout<<"移除末尾5个元素后"<<endl;
    printNums(num);

    //排序
    num.push_back(33);
    sort(num.begin(),num.end(), cmpNew);
    cout<<"加入33排序后"<<endl;
    printNums(num);



}

