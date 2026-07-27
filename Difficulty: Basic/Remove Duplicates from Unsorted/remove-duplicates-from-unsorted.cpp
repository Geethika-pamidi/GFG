class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int, int>m;
        vector<int> r;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==0){
                r.push_back(arr[i]);
            }
            m[arr[i]]++;
            
        }
        return r;
    }
};