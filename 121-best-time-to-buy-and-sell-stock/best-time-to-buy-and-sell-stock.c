int maxProfit(int* prices, int pricesSize) {
    int profit=0,b=0,s=0,finalprofit=0;
    int sum=0;
    int max=prices[0],min=prices[0];
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
            max=prices[i];
            b=i;
        }
        if(prices[i]>max){
            max=prices[i];
            s=i;
        }
    if(b<s){
        profit=prices[s]-prices[b];
        if(profit>finalprofit){
            finalprofit=profit;
        }
    }
    }
    return finalprofit;
}