class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int CurSum = 0;
        if (nums.size() == 1) {
            return sum = nums[0];
        }
        for (int i = 0; i < nums.size(); i++) {
            CurSum += nums[i];                 
            sum = max(sum, CurSum);            
            if (CurSum < 0) CurSum = 0;        
        }
        return sum;
    }
};