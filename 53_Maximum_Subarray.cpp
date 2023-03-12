class Solution { //kadane's algorithm
public:
    int maxSubArray(vector<int>& nums) {
        int max_sub = INT_MIN, curr = 0;
        for(int i = 0; i < nums.size(); i++){
            curr +=  nums[i];
            max_sub = max(max_sub, curr);
            curr = max(curr,0);
        }
         return max_sub;
    }
};
