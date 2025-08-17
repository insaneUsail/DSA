class Solution {
private:
    int Start(vector<int>& nums, int target) {
        int i = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                right = mid - 1;
                i = mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return i;
    }
    int End(vector<int>& nums, int target) {
        int j = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                left = mid + 1;
                j = mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return j;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = Start(nums, target);
        int right = End(nums, target);
        if (left == -1 && right == -1)
            return {-1, -1};
        return {left, right};
    }
};
