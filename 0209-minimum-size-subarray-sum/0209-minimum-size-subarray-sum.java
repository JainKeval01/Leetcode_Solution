class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int j=0;
        int max=Integer.MAX_VALUE;
        int sum = 0 ;
        for(int i = 0; i<nums.length;i++){
                sum+=nums[i];
                while(sum>=target){
                    max=Math.min(max,i-j+1);
                    sum = sum-nums[j];
                    j++;
                }
            }
             if(max==Integer.MAX_VALUE){
            return 0;
        }
        return max;
        }
    }
