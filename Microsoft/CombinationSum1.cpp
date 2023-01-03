class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> candidates, int target, int index, vector<int> checker){
        if(target == 0){
            ans.push_back(checker);\
            return;
        }
        if(index>= candidates.size() || target<0){
            return;
        }
        // not considering any element
        helper(candidates, target, index+1, checker);
        checker.push_back(candidates[index]);
        helper(candidates, target-candidates[index], index, checker);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        helper(candidates, target, 0, {});
        return ans;
    }
};