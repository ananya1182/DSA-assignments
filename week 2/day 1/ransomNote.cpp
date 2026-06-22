#include <iostream>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    int freq[26] = {0};

    // Step 1: count magazine letters
    for (int i = 0; i < magazine.size(); i++) {
        freq[magazine[i] - 'a']++;
    }

    // Step 2: check ransomNote letters
    for (int i = 0; i < ransomNote.size(); i++) {
        freq[ransomNote[i] - 'a']--;

        if (freq[ransomNote[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string ransomNote, magazine;

    cout << "Enter ransomNote: ";
    cin >> ransomNote;

    cout << "Enter magazine: ";
    cin >> magazine;

    if (canConstruct(ransomNote, magazine)) {
        cout << "True (can construct)" << endl;
    } else {
        cout << "False (cannot construct)" << endl;
    }

    return 0;
}