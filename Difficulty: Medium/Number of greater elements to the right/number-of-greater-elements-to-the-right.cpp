
class Solution {
  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        vector<int> vt;
         int cnt=0;
        for(int i=0;i<indices.size();i++){
           for(int j=indices[i]+1;j<arr.size();j++){
               if(arr[indices[i]]<arr[j]) {
                   cnt+=1;
               }
           }
            vt.push_back(cnt);
            cnt=0;
        }
        return vt;
    }
};