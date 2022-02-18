//
// Created by 周子安 on 2022/2/16.
//
#include "iostream"
#include "vector"

using namespace std;
int threeSumClosest(vector<int> &nums, int target) {
    int diff = 0xfffffff;
    int res = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; ++i) {
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right] + nums[i];
            int cut = sum - target;
            if (abs(sum - target) < diff) {
                diff = abs(sum - target);
                res = sum;
            }
            if (cut == 0) return target;
            else if (cut > 0) {
                int tr = right-1;
                while (tr-1>left && nums[tr] == nums[right]){
                    tr--;
                }
                right = tr;
            } else {
                int tl = left+1;
                while (tl+1<right && nums[tl] == nums[left]){
                    tl++;
                }
                left = tl;
            }
        }
    }
    return res;
}