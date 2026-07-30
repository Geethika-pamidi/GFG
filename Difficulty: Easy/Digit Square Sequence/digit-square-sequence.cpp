class Solution {
  public:
    bool reachesOne(int n) {
        // code here
        while(n!=1 && n!=4){
            int s=0;
            while(n>0){
                int digit=n%10;
                s+=digit*digit;
                n/=10;
            }
            n=s;
        }
        return n==1;
    }
};