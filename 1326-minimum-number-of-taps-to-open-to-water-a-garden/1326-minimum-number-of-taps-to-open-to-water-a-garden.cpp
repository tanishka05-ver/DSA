class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> maxi(n + 1, 0);

        for(int i = 0; i <= n; i++) {
            int left = max(0, i - ranges[i]);
            int right = min(n, i + ranges[i]);

            maxi[left] = max(maxi[left], right);
        }

        int ans = 0;
        int currEnd = 0;
        int nextEnd = 0;

        for(int i = 0; i < n; i++) {
            nextEnd = max(nextEnd, maxi[i]);

            if(i == currEnd) {
                if(nextEnd <= i) {
                    return -1;
                }

                ans++;
                currEnd = nextEnd;
            }
        }

        return ans;
    }
};