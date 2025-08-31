class Solution {
    public int distanceTraveled(int mainTank, int additionalTank) {
        int fuel=0;
        while(mainTank>=5&&additionalTank>0){
            fuel+=5;
            mainTank=(mainTank-5)+1;
            additionalTank--;
        }
        fuel+=mainTank;
        return fuel*10;
    }
}