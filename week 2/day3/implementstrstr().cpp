#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {

    if (needle.empty())
        return 0;

    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {

        int j = 0;

        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == m)
            return i;
    }

    return -1;
}

int main() {

    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    int ans = strStr(haystack, needle);

    cout << "Answer = " << ans << endl;

    return 0;
}