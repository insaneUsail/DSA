

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> leadersList;
        int maxNum=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=maxNum){
                leadersList.push_back(arr[i]);
                maxNum=arr[i];
            }
            
       
            
        }
              reverse(leadersList.begin(), leadersList.end());  
        return leadersList;
        
    }
};