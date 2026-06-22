#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string s) {
    int freq[26] = {0};
    int n=s.size();

    
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;  //count krre h
    }

    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 1) { //agar count 1 hogya to index return krdo
            return i;
        }
    }

    return -1;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = firstUniqChar(s);

    cout << "First unique character index: " << result << endl;

    return 0;
}