/* https://leetcode.com/problems/powx-n/description/ */

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int temp=n;
        long n1=n;
        if(n<0)
        {
            n1*=-1;
        }
        while(n1)
        {
            if(n1%2==1)
            {
                n1-=1;
                ans*=x;
            }
            else
            {
                x=x*x;
                n1/=2;
            }
        }
        if(temp<0) return 1/ans;
        return ans;
    }
};
