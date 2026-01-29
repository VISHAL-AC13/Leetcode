class Solution {
    public int[] replaceElements(int[] arr) {
        int n=arr.length;
        int max=arr[n-1];
        for(int i=n-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=max;
            if(temp>max){
                max=temp;
            }
        }
        arr[n-1]=-1;
        return arr;
    }
}