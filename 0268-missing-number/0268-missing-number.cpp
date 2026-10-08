class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualSum=0,fakeSum=0;
        for(int e=0;e<=nums.size();e++){
            actualSum+=e;
        }
        for(int e:nums){
            fakeSum+=e;
        }
        return actualSum-fakeSum;
    }
};