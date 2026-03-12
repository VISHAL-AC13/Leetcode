class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.size();
        int l=0;
      int ans=-1;

        vector<int> freq(256,-1);
       for(int i=0;i<n;i++){
            if(freq[s[i]]==-1){
                freq[s[i]]=i;
            }
            else{
                ans=max(ans,i-freq[s[i]]-1);
            }
       }
        return ans;
    }
};