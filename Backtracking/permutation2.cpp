class Solution {
public:
    int n;
    vector<vector<int>> result;
    vector<bool>used;
    void solve(vector<int>& nums,vector<int>& temp){
        if(temp.size() == n){
            result.push_back(temp);
            return;
        }
        unordered_set<int>levelused;
        for(int i=0 ;i<n;i++){
            if(used[i]) continue;
        if(levelused.find(nums[i])!=levelused.end()) continue;
        
        levelused.insert(nums[i]);
        temp.push_back(nums[i]);
        used[i] = true;
        solve(nums,temp);
        temp.pop_back();
        used[i] = false;

    }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        vector<int>temp;
        used.resize(n,false);
        solve(nums,temp);
        return result;
        
    }
};