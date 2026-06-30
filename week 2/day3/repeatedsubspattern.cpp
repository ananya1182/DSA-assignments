#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0) continue;  // must divide evenly

            string pattern = s.substr(0, len);
            string built = "";

            for (int i = 0; i < n / len; i++) {
                built += pattern;
            }

            if (built == s) return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;

    cout << (sol.repeatedSubstringPattern(s) ? "true" : "false");
}