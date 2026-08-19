class Solution {
public:

    bool isPossible(vector<int>& nums, int k, int maxSum) {
        int subarray = 1;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(sum + nums[i] <= maxSum) {  // ONLY CHANGE
                sum += nums[i];
            }
            else {
                subarray++;
                sum = nums[i];
            }
        }

        return subarray <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int sum = 0, maxVal = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxVal = max(maxVal, nums[i]);
        }

        int start = maxVal, end = sum, ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isPossible(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};