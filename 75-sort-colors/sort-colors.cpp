class Solution {
public:
    void sortColors(vector<int>& nums) {
      std::vector<int> temp(3,0);
       for(int i=0;i<nums.size();i++){
     temp[nums[i]]+=1;
       }
       int idx=0;
       for(int j=0;j<temp.size();j++){
        for(int k=0;k<temp[j];k++){
            nums[idx++]=j;

        }
                   
       }
    }
};