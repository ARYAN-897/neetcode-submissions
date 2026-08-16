class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
        if(i>0 and nums[i]==nums[i-1]) continue;

        while(left<right){
            int s=nums[left]+nums[right];
            int sum=-1*nums[i];
        if(s==sum){
            result.push_back({nums[i], nums[left], nums[right]});
            left++;
            right--;
        while(left<n && nums[left]==nums[left-1]){
            left++;
        }
        while(right>0 && nums[right]==nums[right+1]){
            right--;
         }
        }
        else if(s<sum){
            left++;
        }
        else
        {
           right--; 
        }

        }
    }
    return result;
}
};