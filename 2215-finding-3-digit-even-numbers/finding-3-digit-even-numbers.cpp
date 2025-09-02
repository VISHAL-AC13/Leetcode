class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        bool seen[1000];
        memset(seen,false,sizeof(seen));
        int n=digits.size();
        vector<int>validnumbers;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j&&j!=k&&k!=i){
                        int a=digits[i];
                        int b=digits[j];
                        int c=digits[k];
                        int num=(100*a)+(10*b)+c;
                        if(num>=100&&!seen[num]&&num%2==0){
                            validnumbers.push_back(num);
                            seen[num]=true;
                        }
                    }
                }
            }
        }
            sort(validnumbers.begin(),validnumbers.end());
            return validnumbers;
    }
};