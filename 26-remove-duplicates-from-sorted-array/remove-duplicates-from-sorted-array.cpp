class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 1;

        for (int j = 1; j < n ;)
            if (nums[i - 1] == nums[j]) {
                j++;
            } else if(nums[i - 1] != nums[j]) {
                nums[i] = nums[j];
                i++;
                j++;
            }
        return i;
    }
};
