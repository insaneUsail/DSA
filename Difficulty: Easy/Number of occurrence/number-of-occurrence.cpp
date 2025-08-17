class Solution {
  
  private:
  int Start(vector<int>& arr,int target){
    int i=-1;
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            right=mid-1;
            i=mid;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    return i;
    
}
int End(vector<int>& arr,int target){
    int j=-1;
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            left=mid+1;
            j=mid;
        }
        else if(arr[mid]>target){
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    return j;
    
}

  
  
  public:
    int countFreq(vector<int>& arr, int target) {
int left=Start(arr,target);
int right=End(arr,target);
int res=right-left;
if(left==-1 && right==-1) return 0;
return res+1;

}
};



