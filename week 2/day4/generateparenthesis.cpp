#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int open, int close, string curr, vector<string> &ans) {

    // Base Case
    if (open == 0 && close == 0) {
        ans.push_back(curr);
        return;
    }

    // Add '(' if available
    if (open > 0) {
        solve(open - 1, close, curr + "(", ans);
    }

    // Add ')' only if more closing brackets are available
    if (close > open) {
        solve(open, close - 1, curr + ")", ans);
    }
}

vector<string> generateParenthesis(int n) {

    vector<string> ans;

    solve(n, n, "", ans);

    return ans;
}

int main() {

    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<string> ans = generateParenthesis(n);

    cout << "\nAll Valid Parentheses:\n";

    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}