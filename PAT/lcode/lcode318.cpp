#include "iostream"
#include "vector"

using namespace std;

bool isSame(string &s1, string &s2) {
    int chs[26];
    for (int i = 0; i < 26; ++i) {
        chs[i] = 0;
    }
    for (int i = 0; i < s1.length(); ++i) {
        chs[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); ++i) {
        chs[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if(chs[i]>=2){
            return false;
        }
    }
    return true;
};

int maxProduct(vector<string> &words) {
    int maxLen = 0;
    for (int i = 0; i < words.size() - 1; ++i) {
        for (int j = i + 1; j < words.size(); ++j) {
            if (isSame(words[i], words[j])) {
                int len = words[i].length() * words[j].length();
                maxLen = len > maxLen ? len : maxLen;
            }
        }
    }
    return maxLen;
};

int main() {
    vector<string> v = vector<string>{"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae"};
    cout << maxProduct(v);
}