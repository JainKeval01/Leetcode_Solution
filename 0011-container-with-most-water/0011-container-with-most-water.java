class Solution {
    public int maxArea(int[] height) {
        int maxArea=0;
        int left=0;
        int right=height.length-1;
        while (left<right){
            int lambai=0;
            int width=0;
            int currentArea=0;
            if(height[left]<height[right]){
                lambai=height[left];
                width=right-left;
                left++;
            }else{
                lambai=height[right];
                width=right-left;
                right--;
            }

            currentArea=lambai*width;
            if(currentArea>maxArea){
                maxArea=currentArea;
            }
        }
        return maxArea;
    }
}