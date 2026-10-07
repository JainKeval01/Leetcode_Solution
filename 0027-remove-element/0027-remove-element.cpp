class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int e:nums){
            if(e!=val){
                nums[index]=e;
                index++;
            }
        }
        return index;
    }
};