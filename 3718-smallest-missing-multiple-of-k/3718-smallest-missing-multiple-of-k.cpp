class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int expected = k;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]< expected){
                continue;
            }

            if(nums[i]==expected){
                expected+=k;
            }

            if(nums[i]>expected){
                return expected;
            }
        }
        return expected;
    }
};