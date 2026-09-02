class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int current = nums[0];
        int ans = nums[0];
        int n = nums.size();

        for(int i = 1; i < n ; i++) {

            current = max(nums[i], current + nums[i]);

            ans = max(ans, current);
        }

        return ans;
    }
};
