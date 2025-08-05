class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
                    

        for (int i = 0; i < fruits.size(); i++) {
            bool placed = false;  
            for (int j = 0; j < baskets.size(); j++) {
                if (fruits[i] <= baskets[j]) {
                    placed = true;
                    baskets[j]=0;
                    break;
                }
            }
            if (!placed) count++;
        }
        return count;
    }
};
