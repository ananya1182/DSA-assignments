#include<bits/stdc++.h>
using namespace std;
  bool containsDuplicate(vector<int> &nums){
    unordered_set<int>s;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        if(s.find(num)!= s.end()){
            return true;
        }
        s.insert(num);
    }
    return false;
  };
  int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
        for(int i=0;i<n;i++){
cin>> nums[i];
        }
        cout<< containsDuplicate(nums);
        return 0;
    }
  


