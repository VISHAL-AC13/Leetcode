class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int finishedbottle=0;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange;
            numBottles++;
            finishedbottle+=numExchange;
        }
        finishedbottle+=numBottles;
        return finishedbottle;
    }
}