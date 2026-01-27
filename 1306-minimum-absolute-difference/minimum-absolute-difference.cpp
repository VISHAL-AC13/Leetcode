class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        
        // for(int i=1;i<arr.size();i++){
        //     if(arr[i]<min){
        //         min=arr[i];
        //     }
        // }
        vector<int> initial ;
        int min=arr[1]-arr[0];
        initial.push_back(arr[0]);
        initial.push_back(arr[1]);
        res.push_back(initial);
        for(int i=1;i<arr.size()-1  ;i++){
            int diff=(arr[i+1]-arr[i]);
            vector<int> temp;
            if(min==diff){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
            }
            if(diff<min){
                min=diff;
                res.clear();
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
            }
            if(!temp.empty()){
                res.push_back(temp);
            }
        }

        return res;
    }
};