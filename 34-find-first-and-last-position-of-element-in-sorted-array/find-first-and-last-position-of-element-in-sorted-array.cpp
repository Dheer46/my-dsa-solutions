class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;

        int low = 0, high = n - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] >= target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if(low < n && nums[low] == target) {
            first = low;
        }

        low = 0;
        high = n - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] <= target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        if(high >= 0 && nums[high] == target) {
            last = high;
        }

        return {first, last};
    }
};