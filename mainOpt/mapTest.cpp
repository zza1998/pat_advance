//
// Created by 周子安 on 2021/7/22.
//
#include "iostream"
#include "map"
#include "string"
#include "vector"
#include "unordered_map" // 需要单独定义
using namespace std;
bool cmpMap(pair<int,string>& m1, pair<int,string>& m2){
    return m1.second<m2.second;
}
int main(){
    // map的迭代器只有++，--功能，没有+1，-1的功能（即不能it+=1），这点和vector等容器不一样。
    pair<int,int> pair1(1,2);
    pair<int,int> pair2 = make_pair(2,2);
    pair<int,int> pair3 = pair1;
    cout<<pair3.first<<endl;
    map<int,int> m;
    m.insert(make_pair(1,2));
    cout<<m.size()<<endl;

    // 一次查询后计算没有map 也会增加一个元素 值为数据类型的默认值
    cout<< m[1] <<" "<< m[2] <<endl;
    cout<<m.size()<<endl;

    // map的赋值方式
    m = {{1,2},{3,4}};
    cout<<m[3]<<endl;

    // map按照值来排序
    cout<<"--------map按值排序------"<<endl;
    map<int,string> m2 = {{1,"join"},{2,"tom"},{3,"ame"}};
    vector<pair<int,string>> v(m2.begin(),m2.end());
    sort(v.begin(),v.end(), cmpMap);
    vector<pair<int,string>>::iterator it  ;
    for ( it = v.begin(); it != v.end();it++) {
        cout<< it->first<<" "<< it->second <<endl;
    }
    cout<<endl;

    cout<<"--------插入测试---------"<<endl;
    //
    map<int, int>mymap;
    // insert 在插入已有key时会失败 而 mymap[10] = 20 会覆盖
    pair<map<int,int>::iterator,bool>ret = mymap.insert(pair<int, int>(10, 10));
    if (ret.second)cout << "第一次插入成功" << endl;
    else cout << "第一次插入失败" << endl;

    ret = mymap.insert(make_pair(10, 20));
    if (ret.second)cout << "第二次插入成功" << endl;
    else cout << "第二次插入失败" << endl;


}
