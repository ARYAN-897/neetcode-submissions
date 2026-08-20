class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0,high=0,result=INT_MAX,sum=0;

        while(high<n)
        {
           sum=sum+nums[high];

           while(sum>=target)
           {
             int len = high-low+1;
             result=min(result,len);

             sum=sum-nums[low];
             low++;
           }
            high++;
        }
             if(result==INT_MAX)
             {
                return 0;
             }

        return result;
    }
};