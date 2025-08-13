class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> eIdx;
        for (int i = 0; i < nums.size(); i++) {
            int el = nums[i] ;
            if (eIdx.find(target - el) != eIdx.end()) {
    return {i,eIdx[target-el]};
            };
            eIdx[el]=i;
        };
        return {};
    };
};