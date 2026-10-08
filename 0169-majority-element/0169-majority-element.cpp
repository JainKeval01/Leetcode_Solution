class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candidate = 0 ;
       int count = 0;
       for(int e:nums){
        if(count == 0){
            candidate=e;
        }
        if(candidate == e){
            count++;
        }else{
            count--;
        }
       }
       return candidate;
    }
};