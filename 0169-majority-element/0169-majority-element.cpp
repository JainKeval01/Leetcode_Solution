class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int e:nums){
            m[e]++;
        }
        int size=nums.size()/2;
        int ans=0;
        for(auto a:m){
            if(a.second>size){
                ans=a.first;
            }
        }
        return ans;
    }
};