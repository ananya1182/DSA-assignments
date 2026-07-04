#include <iostream>
#include <stack>
#include <string>
using namespace std;

string decodeString(string s) {

    stack<int> numStack;
    stack<string> strStack;

    string curr = "";
    int num = 0;

    for (int i = 0; i < s.length(); i++) {

        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }

        else if (s[i] == '[') {

            numStack.push(num);
            strStack.push(curr);

            num = 0;
            curr = "";
        }

        else if (s[i] == ']') {

            int repeat = numStack.top();
            numStack.pop();

            string prev = strStack.top();
            strStack.pop();

            while (repeat--) {
                prev += curr;
            }

            curr = prev;
        }

        else {
            curr += s[i];
        }
    }

    return curr;
}

int main() {

    string s;

    cout << "Enter encoded string: ";
    cin >> s;

    cout << "Decoded String: " << decodeString(s);

    return 0;
}