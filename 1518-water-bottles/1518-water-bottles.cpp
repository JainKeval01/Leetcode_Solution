class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        if(numBottles<numExchange){
            return numBottles;
        }
        int emptyBottles = numBottles;
        while (emptyBottles >= numExchange) {
            int newBottles = emptyBottles/numExchange;
            int remaning=emptyBottles%numExchange;
            sum += newBottles;
            emptyBottles=remaning+newBottles;
        }
        return sum;
    }
};