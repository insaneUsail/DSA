class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int ans = 0;
        for (int n : nums) {
            if(majority==0){
                ans=n;
            }
            if(n==ans){
                majority+=1;
            }
            else {
                majority-=1;
            }
        }
        return ans;
    }
};