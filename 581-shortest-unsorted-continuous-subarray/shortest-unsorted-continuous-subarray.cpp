class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN;
        int right = -1;

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            if (nums[i] < maxi)
                right = i;
        }

        int mini = INT_MAX;
        int left = -1;

        for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            if (nums[i] > mini)
                left = i;
        }

        if (right == -1)
            return 0;

        return right - left + 1;
    }
};