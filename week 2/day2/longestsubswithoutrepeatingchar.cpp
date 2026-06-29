#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {

    vector<int> hash(256, -1);

    int n = s.size();
    int l = 0;
    int r = 0;
    int maxlen = 0;

    while (r < n) {

        if (hash[s[r]] != -1) {
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
        }

        int len = r - l + 1;
        maxlen = max(len, maxlen);

        hash[s[r]] = r;
        r++;
    }

    return maxlen;
}

int main() {

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest substring length = "
         << lengthOfLongestSubstring(s);

    return 0;
}