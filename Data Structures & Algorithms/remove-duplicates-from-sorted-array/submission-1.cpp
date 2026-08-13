class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int n=nums.size();
        int officer = 0;
        int cm = 1;

        while(cm<n){
         if(nums[cm]==nums[cm-1]){
            cm++;
         }
         else{
            nums[officer+1] = nums[cm];
            officer++;
            cm++;
            unique++;
         }
        }
    return unique;
    }
};