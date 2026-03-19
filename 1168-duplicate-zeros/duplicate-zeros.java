class Solution {
    public void duplicateZeros(int[] arr) {
        int n=arr.length;
        int i=0;
       while(i<n-1){
            if(arr[i]==0){
                for(int j=n-1;j>=i+2;j--){
                    arr[j]=arr[j-1];
                }

                 arr[i+1]=0;
                i+=2;
            }
            else{
            i++;
            }
        }
    }
}