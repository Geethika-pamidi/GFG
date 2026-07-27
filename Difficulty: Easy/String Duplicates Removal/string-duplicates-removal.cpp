class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        bool visited[256]={false};
        string ans="";
        for(char ch:s){
            if(!visited[ch]){
                ans+=ch;
                visited[ch]=true;
            }
        }
        return ans;
    }
};