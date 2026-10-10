class Solution {
public:
    vector<vector<int>> result;
    void solve(int idx, vector<int>& candidates, int target,
               vector<int>& temp) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        if (idx == candidates.size() || target < 0) {
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (candidates[i] > target) {
                break;
            }
            temp.push_back(candidates[i]);
            solve(i + 1, candidates, target - candidates[i], temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(0, candidates, target, temp);
        return result;
    }
};