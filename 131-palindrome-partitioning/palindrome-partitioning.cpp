class Solution {
public:
    vector<vector<string>> ans;
    vector<string> temp;
    bool ispalin(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void func(int index,string s){
        if(index==s.size()){
            ans.push_back(temp);
        }
        for(int j=index;j<s.size();j++){
            string str=s.substr(index,j-index+1);
            if(ispalin(str)){
                    temp.push_back(str);
                    func(j+1,s);
                    temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        func(0,s);
        return ans;   
    }
};