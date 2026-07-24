class Solution {
  public:
    string isAutomorphic(int n) {
        // code here
        //if(n<0) return n;
        int r=n*n;
        while(n>0){
            if(n%10!=r%10){
                return "Not Automorphic";
            }
            n/=10;
            r/=10;
        }
        return "Automorphic";
    }
};