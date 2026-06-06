#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int removeduplicates(vector<int>& nums){
        int k=nums.size();
        int i=0;
        for(int j=1;j<k;j++){
            if(nums[j] != nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;

    }
};
int main(){
    vector<int> nums= {1,1,2,2,3,3,3};
    Solution s;
int k = s.removeduplicates(nums);
cout<< "number of unique elements:"<< k << endl;
cout<< "array after removing duplicates";

for(int i=0;i<k;i++){
cout << nums[i]<< " ";
}
return 0;
}