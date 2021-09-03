

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
class Solution {
public:
    struct Node{
        string code;
    };
    static int cmp(Node& n1,Node& n2){
        string a,b;
        int res =  a.append(n1.code).append(n2.code)>b.append(n2.code).append(n1.code);
        a="";b="";
        return res;
    }
    vector<Node> v;
    string largestNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            string sx = to_string(x);
            Node nb;
            nb.code = sx;
            v.push_back(nb);
        }
        sort(v.begin(),v.end(),cmp);
        string res;
        for (int i = 0; i < v.size(); ++i) {
            res.append(v[i].code);
            if(res.length()<=10&&stod(res) == 0){
                res = "";
            }
        }
        return res;
    }
};