class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
    int left=0;
    int right=arr.size()-1;
    int res=arr.size();
    
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]>=target){
            res=mid;
            right=mid-1;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
       
    }
    return res               ;
    }
};
