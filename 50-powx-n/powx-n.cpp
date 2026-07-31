class Solution {
public:
    double myPow(double x, int n) {
        long binform=n;
        if (binform<0){
            binform=-binform;
            x=1/x;
        }
        double ans=1;
        while(binform>0){
            if (binform%2){
                ans=ans*x;
            }
            x=x*x;
            binform/=2;
        }
        return ans;
    }
};