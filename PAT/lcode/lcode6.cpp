
#include "iostream"
#include "vector"
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n);
int main(){
    vector<int> v = {1,0,0,0,1};
    cout<<canPlaceFlowers(v,1);
};
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 1,num = 0;
    for (int i = 0; i < flowerbed.size(); ++i) {
        if(flowerbed[i] == 1){
            count = 0;
        } else{
            count++;
            if(count == 3){
                num++;
                count = 1;
            }
            if(num>=n){
                return true;
            }
        }
    }
    if(num == 2){
        num++;
    }
    return num>=n;
}