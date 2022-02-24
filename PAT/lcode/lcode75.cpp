#include "iostream"
#include "vector"

using namespace std;

void sortColors(vector<int> &nums) {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            a++;
        } else if (nums[i] == 1) {
            b++;
        } else {
            c++;
        }
    }
    int j = 0;
    for (;j<a;j++) {
        nums[j]=0;
    }
    for (;j<a+b;j++) {
        nums[j]=1;
    }
    for(;j<a+b+c;j++){
        nums[j] = 2;
    }
}