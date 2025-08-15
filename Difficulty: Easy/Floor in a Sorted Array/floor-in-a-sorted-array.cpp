class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
         int left =0;
        int res =-1;
        int right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]<=x){
                left=mid+1;
                res=mid;
            }
            else if(arr[mid]>x){
                right=mid-1;
            }
            
        }
        return res;
    }
        
};  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
