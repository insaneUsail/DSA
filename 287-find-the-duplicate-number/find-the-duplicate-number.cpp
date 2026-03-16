class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_set<int> mpp;
       for(int i=0; i<nums.size();i++){
        if(mpp.count(nums[i])){
            return nums[i];
        }
        mpp.insert(nums[i]);
       }
       return nums.size();
}
};