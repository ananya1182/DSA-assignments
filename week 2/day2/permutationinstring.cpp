#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkInclusion(string s1, string s2) {

    int n = s1.size();
    int m = s2.size();

    if (n > m)
        return false;

    vector<int> f1(26, 0), f2(26, 0);

    // First window ki frequency
    for (int i = 0; i < n; i++) {
        f1[s1[i] - 'a']++;
        f2[s2[i] - 'a']++;
    }

    if (f1 == f2)
        return true;

    // Sliding Window
    for (int i = n; i < m; i++) {

        // New character add karo
        f2[s2[i] - 'a']++;

        // Old character remove karo
        f2[s2[i - n] - 'a']--;

        // Compare frequencies
        if (f1 == f2)
            return true;
    }

    return false;
}

int main() {

    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if (checkInclusion(s1, s2))
        cout << "True";
    else
        cout << "False";

    return 0;
}