// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int sum=-1;
        int cur=0;
        int beststart=0;
        int start=0;
        int end=0;
        if(arr.size()==1 && arr[0]>=0){ 
            
        return arr;            
        }
        
        for(int i =0;i<arr.size();i++){
            
            cur+=arr[i];
            if(cur>sum ||(cur==sum && arr[i]==0)){
              end=max(i,end);
              sum=max(cur,sum);
              beststart=start;


            }
            else if(cur<0 || arr[i]<0){
                cur=0;
                start=i+1;
            }
           else if(cur>sum && i>=start){
             sum=max(cur,sum);
             end=i;
            }
            
         
        }
       if(sum==-1) return {-1};
       return vector<int>(arr.begin() + beststart, arr.begin() + end + 1);

    }
    
    
};