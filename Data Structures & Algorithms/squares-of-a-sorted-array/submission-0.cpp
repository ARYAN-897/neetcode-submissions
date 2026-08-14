class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] >= 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }

        int j = 0;
        int id = 0;

        n = neg.size();
        int m = pos.size();

        vector<int> res(n + m);

        // Square positive numbers
        for(int i = 0; i < m; i++) {
            pos[i] = pos[i] * pos[i];
        }

        // Square negative numbers
        for(int i = 0; i < n; i++) {
            neg[i] = neg[i] * neg[i];
        }

        // Negative squares are in decreasing order,
        // so reverse them
        reverse(neg.begin(), neg.end());

        int i = 0;

        // Merge neg and pos
        while(i < n && j < m) {

            if(neg[i] < pos[j]) {
                res[id] = neg[i];
                id++;
                i++;
            }
            else {
                res[id] = pos[j];
                id++;
                j++;
            }
        }

        // Remaining negative squares
        while(i < n) {
            res[id] = neg[i];
            id++;
            i++;
        }

        // Remaining positive squares
        while(j < m) {
            res[id] = pos[j];
            id++;
            j++;
        }

        return res;
    }
};