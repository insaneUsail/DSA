class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;
       
for(int p:prices){
minprice=min(p,minprice);
maxprofit=max(maxprofit,p-minprice);


}
        return maxprofit;
    }
};