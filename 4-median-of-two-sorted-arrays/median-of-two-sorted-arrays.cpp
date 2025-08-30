class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int l1=nums1.size();
        int l2=nums2.size();
        int i=0;
        int j=0;
        while(i<l1&&j<l2){
             if(nums1[i]<nums2[j]){
                    result.push_back(nums1[i]);
                    i++;
             }
             else if(nums2[j]<nums1[i]){
                result.push_back(nums2[j]);
                j++;
             }
             else {
                result.push_back(nums1[i]);
                result.push_back(nums2[j]);
                i++;
                j++;
             }   
        }
        if(i<l1){
            for(int k=i;k<l1;k++){
                result.push_back(nums1[k]);
            }
        }
        if(j<l2){
            for(int k=j;k<l2;k++){
                result.push_back(nums2[k]);
            }
        }
        int n=result.size();
        if(n%2!=0){
            int index=(result.size())/2;
            return result[index];
        }
        else{
            int n1=(result.size())/2;
            int n2=n1-1;
            double median=(float)(result[n1]+result[n2])/2;
            return median;
        }
    }
};