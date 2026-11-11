class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int currEnd = 0;
        int nextEnd = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            nextEnd = max(nextEnd, i + nums[i]);
            if (i == currEnd) {
                ans++;
                currEnd = nextEnd;
            }
        }
        return ans;
    }
};