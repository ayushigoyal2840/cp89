class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n==0) return 0;
        int number=0;
        while(n!=0)
        {
            if(((n)&1)==1)
                number+=1;
            n=n>>1;
        }
        return number;
        
    }
};