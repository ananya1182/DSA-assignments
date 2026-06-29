#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int n = s.size();
    int m = t.size();

    if (n > m)
        return false;

    int i = 0, j = 0;

    while (i < n && j < m) {

        if (s[i] == t[j]) {
            i++;
        }

        j++;
    }

    return (i == n);
}

int main() {

    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    if (isSubsequence(s, t))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}