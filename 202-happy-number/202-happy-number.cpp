class Solution {
public:
    int find(int n)
    {
        int ss=0;
        while(n>0)
        {
            int rem = n%10;
            ss+=rem*rem;
            n=n/10;
        }
        return ss;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        st.insert(n);
        while(n!=1)
        {
            int numm = find(n);
            // cout<<numm<<endl;
            if(st.find(numm)!=st.end())
                return false;
            st.insert(numm);
            n=numm;
        }
        return true;
    }
};