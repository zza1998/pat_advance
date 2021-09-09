#include "iostream"
#include "algorithm"
#include "cmath"
#include "unordered_map"
using namespace std;
unordered_map<int,int> len;
bool isPrime(int x){
    if(x<2) return false;
    int sqt = (int)sqrt(x);
    for (int i = 2; i <= sqt ; ++i) {
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
int size,n,m;
int main(){
    cin>>size>>n>>m;
    while (true){
        if(isPrime(size)){
            break;
        }
        size++;
    }
    int hash[size];
    fill(hash,hash+size,-1);
    for (int i = 0; i < n; ++i) {
        int num; cin>>num;
        int hCode = num%size;
        if(hash[hCode] == -1){
            hash[hCode] = num;
            len[num] = 1;
        } else {
            int nod = 1;
            while (nod < size && hash[(num+nod*nod)%size] != -1){
                nod++;
            }
            int hhash = (num+nod*nod) % size;
            if(hash[hhash] != -1){
                printf("%d cannot be inserted.\n",num);
            } else{
                hash[hhash] = num;
            }
            len[num] = nod + 1;

        }
    }
    double sum = 0;
    for (int i = 0; i < m; ++i) {
        int checkNum; cin>>checkNum;
        if(len.find(checkNum)==len.end()){
            int times = 0;
            while (times < size){
                int code = (checkNum + times * times )%size;
                if(hash[code] == checkNum || hash[code] == -1){
                    break;
                }
                times++;
            }
            sum+=times+1;
        } else{
            sum+=len[checkNum];
        }
    }
    sum = sum/m;
    printf("%.1f\n",sum);
}