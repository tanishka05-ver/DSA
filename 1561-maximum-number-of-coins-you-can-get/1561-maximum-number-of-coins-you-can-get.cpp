class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        
        sort(piles.begin(), piles.end());
        int result = 0;
        int Alice = 0;
        int Bob = 0;
        int m = n - 2;
        while (m > Bob) {
            result += piles[m];
            Bob++;
            Alice -= 2;
            m -= 2;
        }
        return result;
    }
};