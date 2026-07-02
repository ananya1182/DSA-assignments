#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }

    return s;
}

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    cout << "Output: " << reverseWords(s);

    return 0;
}