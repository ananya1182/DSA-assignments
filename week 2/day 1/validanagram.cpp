#include<bits/stdc++.h>
using namespace std; 

bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)
        return false;
        for(int i=0;i<n;i++){
            bool found= false;
            for(int j=0;j<m;j++){
                if(s[i]==t[j]){
                     found = true;
                    t[j]='#'; //mark the letter as hash so it doesnt mismatch with another same letter
                    break;
                }
            }
if(!found)
return false;
        }
return true;
    }

int main(){
    string s,t;
    cout << "enter first string";
    cin>> s;

    cout << "enter second string";
    cin >> t;

    if(isAnagram(s, t))
    cout << "Valid Anagram";
else
    cout << "Not an Anagram";
    return 0;
}