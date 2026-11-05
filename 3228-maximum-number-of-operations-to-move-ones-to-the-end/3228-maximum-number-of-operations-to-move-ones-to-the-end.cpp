class Solution {
public:
    int maxOperations(string s) {
        int n = s.size();
        int ans = 0;
        int ones = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                ones++;
            }
            else if(i+1 == s.size() || s[i+1] == '1'){
                ans += ones;
            }
        }
        return ans;
    }
};