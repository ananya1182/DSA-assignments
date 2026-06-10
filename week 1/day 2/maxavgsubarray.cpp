#include<bits/stdc++.h>
using namespace std;
 double findMaxAverage(vector<int>& nums, int k) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            s+=nums[i];
            
            }
            int maxi=s;
            for(int i=k;i<n;i++){
                s=s+nums[i]-nums[i-k];
                maxi=max(maxi,s);
            }
             return (double)maxi/ k;
        };
        int main(){
            int n;
            cin >> n;
            vector<int> nums(n);
            for(int i=0;i<n;i++){
                  cin >> nums[i];
    }

    int k;
    cin >> k;

    cout << findMaxAverage(nums, k);

    return 0;
            }
        
       
   
