class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> set = new HashSet<>();

        for(int a : nums){
            set.add(a);
        }

        int longest = 0;

        for(Integer e:set){
            int current=e;
            int currentCount=0;
            if(!set.contains(e-1)){
                while(set.contains(current)){
                    current++;
                    currentCount++;
                }
            }
            longest=Math.max(longest,currentCount);
        }

        return longest;
    }
}