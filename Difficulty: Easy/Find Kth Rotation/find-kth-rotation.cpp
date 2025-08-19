class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
     int left=0;
     int right=arr.size()-1;
     int ans=0;
     while(left<=right){
         int mid=left+(right-left)/2;
         if(arr[left]<=arr[right]){
             ans=left;
             break;
         }
        else if(arr[left]<=arr[mid]){
             left=mid+1;
         }
         else {
             left+=1;
         }
         
         
         
         
     }
        
        return ans;
    }
};