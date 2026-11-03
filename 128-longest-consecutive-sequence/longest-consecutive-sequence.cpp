class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());

        int count = 1;
        int ans = 0;
        int prev = INT_MIN;

        for(int num : st) {
            if(prev != INT_MIN && num == prev + 1) {
                count++;
            }
            else {
                count = 1;
            }

            ans = max(ans, count);
            prev = num;
        }

        return ans;
    }
};