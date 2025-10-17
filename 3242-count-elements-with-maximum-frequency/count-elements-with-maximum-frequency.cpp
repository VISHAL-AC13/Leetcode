class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxfreq=0,sum=0;
        for(int n:nums){
            freq[n]++;
            maxfreq=max(maxfreq,freq[n]);
        }
        for(auto f:freq){
            if(f.second==maxfreq){
                sum+=maxfreq;
            }
        }
        return sum;
        }
    
};