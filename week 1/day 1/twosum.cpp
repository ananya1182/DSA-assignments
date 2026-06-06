
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            int num =nums[i];
            int more =target-num;

            if(mpp.find(more)!= mpp.end())
             {

                return {mpp[more], i};
            }

            mpp[num] = i;
        }

        return {-1, -1};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};

    int target = 9;

    vector<int> final = s.twoSum(nums, target);

    cout << final[0] << " " << final[1] << endl;
  return 0;
}