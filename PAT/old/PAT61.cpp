//
// Created by 周子安 on 2021/7/29.
//

#include "iostream"

using namespace std;

int main() {
    string weeks[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int coms1 = 0;
    string week;
    int hour, mins;
    for (int i = 0; i < (int)s1.size(); ++i) {
        if (s1[i] < 'A' || s1[i] > 'G') continue;
        if (s1[i] == s2[i]) {
            week = weeks[s1[i] - 'A'];
            coms1 = i;
            break;
        }
    }
    for (int i = coms1 + 1; i < s1.size(); ++i) {
        if (isdigit(s1[i])|| (s1[i] >= 'A' && s1[i] <= 'N')) {
            if (s1[i] == s2[i]) {
                if (isdigit(s1[i])) {
                    hour = (s1[i] - '0');
                } else {
                    hour = (s1[i] - 'A' + 10);
                }
                break;
            }
        }

    }
    for (int i = 0; i < s3.size(); ++i) {
        if (isalpha(s3[i])&& s3[i] == s4[i]) {
            mins = i;
            break;
        }
    }
    printf("%s %02d:%02d", week.c_str(), hour, mins);

}