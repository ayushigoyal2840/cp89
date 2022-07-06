class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        if(n==0)
            return 0;
        
        if(n==2)
            return first+second;
        int sum=first+second;
        while(n>2)
        {
            first=second;
            second=sum;
            sum=first+second;
            n--;
        }
        return sum;
    }
};