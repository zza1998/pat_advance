//
// Created by 周子安 on 2021/8/4.
//

#include "iostream"

using namespace std;

int main() {
    int num;
    cin >> num;
    string fname, mname, fcode, mcode;
    int fscore = -1, mscore = 200;
    for (int i = 0; i < num; ++i) {
        string name, six, code;
        int score;
        cin >> name >> six >> code >> score;
        if (six == "F" && score > fscore) {
            fname = name;
            fcode = code;
            fscore = score;
        }
        if(six == "M" && score < mscore){
            mname = name;
            mcode = code;
            mscore = score;
        }
    }
    if(fscore!=-1){
        cout<<fname<<" "<<fcode<<endl;
    } else{
        cout<<"Absent"<<endl;
    }
    if(mscore!=200){
        cout<<mname<<" "<<mcode<<endl;
    } else{
        cout<<"Absent"<<endl;
    }
    if(fscore!=-1&&mscore!=200){
        cout<<fscore-mscore<<endl;
    } else{
        cout<<"NA"<<endl;
    }

}