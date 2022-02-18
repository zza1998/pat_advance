#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int sum = 0xfffffff;

int minimumTotal(vector<vector<int>> &triangle) {
    if(triangle.size() == 1){
        return triangle[0][0];
    }
    int size = triangle.size();
    int arr[size+10][size+10];
    arr[0][0] = triangle[0][0];
    int mins = 999999999;
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i+1; ++j) {
            if(j==0){
                arr[i][j] = triangle[i][j]+triangle[i-1][j];
            } else if(j==i){
                arr[i][j] = triangle[i][j]+triangle[i-1][j-1];
            } else{
                arr[i][j] = min(triangle[i][j]+triangle[i-1][j], triangle[i][j]+triangle[i-1][j-1]);
            }
            triangle[i][j] = arr[i][j];
            if(i==size-1)
            mins = min(arr[i][j],mins);
        }
    }
    return mins;
}