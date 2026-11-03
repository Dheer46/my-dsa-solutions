class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxele = nums[0];
        for (int i = 0;i<n;i++){
            if(nums[i]>maxele){
                maxele = nums[i];
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = maxele - nums[i] + ans;
        }
        return ans;
    }
};