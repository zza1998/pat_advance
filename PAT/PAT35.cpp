

#include "string"
#include "vector"
#include "iostream"
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<string> modi;
    vector<string> names;
    int flag = 0;
    for (int i = 0; i < num; ++i) {
        string name, pwd;
        cin >> name >> pwd;
        if (pwd.find('1') == -1 && pwd.find('0') == -1
            && pwd.find('l') == -1 && pwd.find('O') == -1) {
            continue;
        }
        flag = 1;
        for (int j = 0;j< pwd.size() ;j++) {
            char c = pwd[j];
            if (c == '1') {
                pwd[j] = '@';
            } else if (c == '0') {
                pwd[j] = '%';
            } else if (c == 'l') {
                pwd[j] = 'L';
            } else if (c == 'O') {
                pwd[j] = 'o';
            }
        }
        names.push_back(name);
        modi.push_back(pwd);
    }
    if(flag){
        cout<<modi.size()<<endl;
        for (int i = 0; i < modi.size(); ++i) {
            cout<<names[i]<<" ";
            cout<<modi[i]<<endl;
        }
    } else if (num == 1){
        cout<<"There is 1 account and no account is modified"<<endl;
    } else{
        cout<<"There are "<< num <<" accounts and no account is modified"<<endl;
    }
}

