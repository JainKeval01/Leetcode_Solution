
class Solution {
public:
    void comb(int indx, vector<int>& candi, int target,
              vector<vector<int>>& ans, vector<int>& curr) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        if (indx == candi.size()) {
            return;
        }

        if (candi[indx] <= target) {
            curr.push_back(candi[indx]);
            comb(indx, candi, target - candi[indx], ans, curr);
            curr.pop_back();
        }

        comb(indx + 1, candi, target, ans, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        comb(0, candidates, target, ans, curr);
        return ans;
    }
};
