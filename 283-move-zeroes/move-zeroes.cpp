class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return;

        int i = 0;
        int j = 1;

        while(j < n){

            if(nums[i] == 0 && nums[j] != 0){
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                j++;
            }
            else if(nums[i] == 0 && nums[j] == 0){
                j++;
            }
            else if(nums[i] != 0 && nums[j] == 0){
                i++;
                if(i == j) j++;   
            }
            else if(nums[i] != 0 && nums[j] != 0){
                i++;
                j++;
            }

            if(i >= j) j++;   
        }
    }
};
