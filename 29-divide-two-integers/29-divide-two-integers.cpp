class Solution {
public:
    int divide(int dividend, int divisor) {
        long long res=0;
        long long m=abs((long long)dividend);
        long long n=abs((long long)divisor);
        while(m>=n)
        {
            long long s=n,temp=1;
            while((s<<1) < m)
            {
                s=s<<1;
                temp=temp<<1;
            }
            res+=temp;
            m-=s;
        }
        res=(dividend>0) ^ (divisor>0) ? -res : res;
        return (res>0) ? (res>INT_MAX ? INT_MAX:res):(res<INT_MIN?INT_MIN:res);
        
    }
};