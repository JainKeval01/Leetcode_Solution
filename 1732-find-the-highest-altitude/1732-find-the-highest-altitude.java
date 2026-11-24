class Solution {
    public int largestAltitude(int[] gain) {
        int sum=0;
        int largest=0;
        for(int i=0;i<gain.length;i++){
            sum+=gain[i];
            if(sum>largest){
                largest=sum;
            }
        }
        return largest;
    }
}