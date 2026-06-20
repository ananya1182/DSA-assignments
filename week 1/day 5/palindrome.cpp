#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string t = " ";
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
int n = t.size();

        for (int i = 0; i < n / 2; i++) {
            if (t[i] != t[n - i - 1]) {
                return false;
            }
        }

        return true;
    }
};


int main() {
    string s;
    getline(cin, s);

    Solution obj;
    cout << (obj.isPalindrome(s) ? "true" : "false"); //using ternary operator

    return 0;
}