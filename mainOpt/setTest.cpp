#include "iostream"
#include "set"
#include <utility>
#include "string"
// set的 insert 和 emplace 区别
using namespace std;
struct Stu{
    string name;
    int age;
    Stu(string n,int age){
        this->age = age;
        this->name = std::move(n);
    }
    // 一定要重载比较运算符才可以用set
    bool operator < (const Stu &stu) const{
        return age< stu.age;
    }
};
int main() {
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    //s.insert(20);
    s.insert(3);
    cout << "set 的 size 值为 ：" << s.size() << endl;
    cout << "set 的 maxsize的值为 ：" << s.max_size() << endl;
    cout << "set 中的第一个元素是 ：" << *s.begin() << endl;
    cout << "set 中的最后一个元素是:" << *s.end().operator--() << endl;
    s.clear();
    if (s.empty()) {
        cout << "set 为空 ！！！" << endl;
    }
    cout << "set 的 size 值为 ：" << s.size() << endl;
    cout << "set 的 maxsize的值为 ：" << s.max_size() << endl;

    set<Stu> stus;
    Stu s1 = *new Stu("xiaomin",1);
    stus.emplace(Stu("xiaoli",10));
    stus.emplace(Stu("lisi",4));
    stus.emplace("a",333);
    for(const auto& stc:stus){
        Stu gc = ((Stu)stc);
        cout<<  gc.name << " " << gc.age<<", ";
    }
    cout<<endl;
}