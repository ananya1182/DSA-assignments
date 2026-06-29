#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {

    vector<int> ans;

    int n = s.size();
    int m = p.size();

    if (m > n)
        return ans;

    vector<int> freqP(26, 0);
    vector<int> window(26, 0);

    for (char ch : p)
        freqP[ch - 'a']++;

    for (int i = 0; i < n; i++) {

        // Add current character
        window[s[i] - 'a']++;

        // Remove character outside the window
        if (i >= m)
            window[s[i - m] - 'a']--;

        // Compare frequency arrays
        if (window == freqP)
            ans.push_back(i - m + 1);
    }

    return ans;
}

int main() {

    string s, p;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter pattern: ";
    cin >> p;

    vector<int> ans = findAnagrams(s, p);

    cout << "Anagram indices: ";

    for (int x : ans)
        cout << x << " ";

    return 0;
}