//
// Created by 周子安 on 2021/7/22.
//

#include "iostream"
#include "cstring"
#include "string"
#include "vector"
#include "sstream"
using namespace std;

// 以一定格式匹配输入 ^\n 表示不匹配 \n
void inputScanf() {
    char str[1024];
    scanf("%[^\n]", str);
    getchar();
    cout << "第一行" << str << endl;
    scanf("%[^\n]", str);
    cout << "第二行" << str << endl;
}

void zhenze(){
    // 读取tom %* 表示跳过 %表示匹配
    const char* url = "<sip:tom@172.18.1.133>";

    char uri[10] = {0};

    sscanf(url,"%*[^:]:%[^@]", uri);

    printf("%s ",uri);
}

void outputList() {
    // 循环输出列表 并且以,分割
    int x[] = {2, 3, 4, 5, 6};
    bool flag = false;
    for (int item : x) {
        if (flag) cout << " ";
        cout << item;
        flag = true;
    }
}
// 重要
void getL(){
    string s;
    getline(cin,s);
    stringstream ssin(s);
    string t;
    vector<string> ddd;
    while(ssin>>t){
        ddd.emplace_back(t);
    }
    cout<<ddd.back()<<" "<<ddd[3]<<endl;
    cout<<endl;
}

int main() {
    getL();
    // inputScanf();
    outputList();
    const char *m1 = "coconut is lovely";
    cout << "Now use cout to print *m1=" << *m1 << endl;
    cout << "Now use cout to print m1=" << m1 << endl;
    printf("Now use printf to print *m1=%c\n", *m1);
    printf("Now use printf to print m1=%d\n", m1);
    printf("Now use printf to print m1=%s\n", m1);

    string str1 = "abcdef";
    string str2 = "ABCDEF";
    cout << (str1 > str2) << endl;

    int a[] = {1, 222, 3, 9999, 9999};
    int max = *max_element(a, a + 4);
    cout << max << endl;

    // 说明：get函数读入时需要考虑最后的换行符，也就是说，如果用get读入多行数据，
    // 要把'\n'另外读出来，一般使用cin.get(str,1024).get();来读入多组数据。
    string str;
    getline(cin, str);
    cout << str << endl;

    char str3[1024];
    cin.get(str3, 1024);//读入char数组


}

