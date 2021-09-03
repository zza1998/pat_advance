
#include "iostream"
#include "vector"
#include "algorithm"
#include "map"
#include "cstring"
#include "cmath"
using namespace std;
struct Car{
    char code[10];
    int time,flag,crrNum;
};
int getTime(int hh,int mm,int ss){
    return hh*3600+mm*60+ss;
}
int cmpC(const Car &c1,const Car &c2){
    if(strcmp(c1.code,c2.code)!=0){
        return strcmp(c1.code,c2.code) < 0;
    }
    return c1.time<c2.time;
}
int cmpT(const Car &c1,const Car &c2){
    return c1.time<c2.time;
}
void timeConvert(int n){
    int ss = n%60;
    n = n/60;
    int mm = n%60;
    int hh = n/60;
    printf("%02d:%02d:%02d\n",hh,mm,ss);
}
int main(){
    int carNum,checkNum,maxTime = 0;
    cin>>carNum>>checkNum;
    vector<Car> allCar,validCars;
    map<string ,int> m; // map 自动排序输出最大数
    for (int i = 0; i < carNum; ++i) {
        Car car{};
        char flags[5];
        int hh,mm,ss;
        scanf("%s %d:%d:%d %s\n",car.code,&hh,&mm,&ss,flags);
        car.time = getTime(hh,mm,ss);
        car.flag = strcmp(flags,"in")==0?1:-1;
        allCar.push_back(car);
    }
    // 过滤有效车并记录最大值
    sort(allCar.begin(),allCar.end(), cmpC);
    for (int i = 0; i < carNum-1; ++i) {
        if(strcmp(allCar[i].code,allCar[i+1].code) == 0 && allCar[i].flag == 1 && allCar[i+1].flag == -1){
            m[allCar[i].code] += allCar[i+1].time - allCar[i].time;
            if(m[allCar[i].code] > maxTime){
                maxTime = m[allCar[i].code];
            }
            validCars.push_back(allCar[i]);
            validCars.push_back(allCar[i+1]);
        }
    }

    sort(validCars.begin(),validCars.end(),cmpT);
    validCars[0].crrNum = 1;
    for (int i = 1; i < validCars.size(); ++i) {
        validCars[i].crrNum = validCars[i].flag + validCars[i-1].crrNum;
    }
    int beginIndx = 0;
    for (int i = 0; i < checkNum; ++i) {
        int hh,mm,ss,cunum;
        scanf("%d:%d:%d",&hh,&mm,&ss);
        int timestamp = getTime(hh,mm,ss);
        for (int j = beginIndx; j < validCars.size(); ++j) {
            if(validCars[j].time > timestamp){
                beginIndx = j;
                break;
            }
            cunum = validCars[j].crrNum;
        }
        cout<<cunum<<endl;
    }

    for (auto it:m) {
        if(it.second == maxTime){
            cout<<it.first<<" ";
        }
    }
    timeConvert(maxTime);
}