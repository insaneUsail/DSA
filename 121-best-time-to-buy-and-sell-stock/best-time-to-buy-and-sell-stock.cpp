class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
       
for(int p:prices){
minprice=min(p,minprice);
maxprofit=max(maxprofit,p-minprice);


}
        return maxprofit;
    }
};