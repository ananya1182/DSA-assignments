#include <bits/stdc++.h>
using namespace std;

    void reverseString(vector<char>& s) {
        int lp = 0;
        int rp = s.size() - 1;

        while (lp < rp) {
            swap(s[lp], s[rp]);
            lp++;
            rp--;
        }
    };
int main() {
    string str;
    cin >> str;   

    vector<char> s(str.begin(), str.end());

reverseString(s);

  
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    return 0;
}