class Solution {
  public:
  public:
    bool isStrong(int n) {
        // code here
        int s=0;
        int original=n;
        while(n>0){
            
            int digit=n%10;
            int fact=1;
            for(int i=1;i<=digit;i++){
                fact=fact*i;
            }
            s+=fact;
            n/=10;
        }
        return s==original;
    }
};
