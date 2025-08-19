class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return true;
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && nums[mid] > target) {
                    right = mid - 1;
                } else if (nums[left] > nums[mid]) {
                   
                    left = mid + 1;
                    
                } else {
                    left+=1;
                }
            } else {
                if (nums[left] <= target && nums[mid] < target) {
                    right = mid - 1;

                } else {
                    left += 1;
                }
            }
        }
        return false;
    }
};