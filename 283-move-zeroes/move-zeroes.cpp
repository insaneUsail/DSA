class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        if(nums.size()<=1){
            nums;
        }
        for(int j=1;j<nums.size();){


            if(nums[i]==0 && nums[j]!=0){
                nums[i]=nums[j];
                nums[j]=0;
                i++;
                j++;
            }
           else if(nums[i]==0 && nums[j]==0){
           j++;
            }
            else if(nums[i]!=0 && nums[j]==0){
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]!=0){
                i++;
                j++;
            }
        }
    }
};