class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //    for(int i=1;i<nums.size();i++){
    //     if(nums[i]==nums[i-1]){
    //         return true;
    //     }
     
    //    }
    //     return false;
    unordered_set<int> s;
     for(int n : nums){
        if(s.find(n)!=s.end()){
            return true;
        }
        s.insert(n);
    }
    return false;
       }
    
};