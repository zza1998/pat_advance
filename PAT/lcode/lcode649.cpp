#include "iostream"

using namespace std;

string predictPartyVictory(string senate);

int main() {
    predictPartyVictory("DDRRR");
}

string predictPartyVictory(string senate) {
    int n=(int)senate.size();
    while(true){
        for(int i=0;i<n;i++){
            if(senate[i]=='D'){
                unsigned long j=senate.find('R',i);
                if(j==string::npos)j=senate.find('R');
                if(j==string::npos)return "Dire";
                senate[j]='0';
            }else if(senate[i]=='R'){
                unsigned long j=senate.find('D',i);
                if(j==string::npos)j=senate.find('D');
                if(j==string::npos)return "Radiant";
                senate[j]='0';
            }
        }
    }
}