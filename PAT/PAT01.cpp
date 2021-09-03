#include "iostream"
#include "string"
using namespace std;
int main(){
  int a = 10*10*10*10*10*10*10*10*10;
  cout<<a<<endl;
  // int * int 用 long 接受时 值还是int的范围
  long x = a*10000;
  long v = (long)a * 10000;
  cout<<x<<endl;
  cout<<v<<endl;
}
