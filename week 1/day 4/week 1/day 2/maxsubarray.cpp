
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int s =0;
    int maxi =INT_MIN;
int n=nums.size();
    for(int i = 0; i <n; i++) {
        s += nums[i];
        maxi = max(maxi, s);
        if(s < 0) {
            s= 0;
        }
    }
    return maxi;
}
int main() {
  int n;
  cout<<"Enter the size of the array";
  cin>>n;
  vector<int> nums (n);

  cout << "Enter the elements";
for(int i=0;i<n;i++){
    cin >> nums[i];
}
    cout << "Maximum Subarray Sum is" << maxSubArray(nums);
    return 0;
}


