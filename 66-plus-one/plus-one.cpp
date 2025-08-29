class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>newdigits;
       int carry=1;
       for(int i=digits.size()-1;i>=0;i--){
            int sum=digits[i]+carry;
            newdigits.push_back(sum%10);
            carry=sum/10;
       }
       if(carry){
        newdigits.push_back(carry);

       }
       reverse(newdigits.begin(),newdigits.end());
       return newdigits;
    }
};