class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
         vector<int> temp(n);
        for (int j=0;j<n;j++){
            temp[j]=nums[(n-k+j)%n];
        }
         nums=temp;
    }
};