class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> p(n,0);
        int a=1;
        int temp=1;
         int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
              temp*=1;
            } 
            else{
            temp*=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            a*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(count==1&&nums[i]==0) p[i]=temp;
            else if(nums[i]==0){
                 p[i]=a;
            }
            else{

                 p[i]=a/nums[i];
            }
        }
        return p;
    }
};