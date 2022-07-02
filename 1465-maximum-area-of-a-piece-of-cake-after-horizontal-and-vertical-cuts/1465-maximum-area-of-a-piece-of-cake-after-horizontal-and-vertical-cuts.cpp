// #define mod 1e9+7;
class Solution {
public:
    
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
       int maxh=0,minh=0;
       vector<int>maxhh,minhh;
        sort(hor.begin(),hor.end());
        sort(ver.begin(),ver.end());
        maxhh.push_back(hor[0]);
        for(int i=0;i<hor.size()-1;i++)
        {
            maxhh.push_back(hor[i+1]-hor[i]);
        }
        maxhh.push_back(h-hor[hor.size()-1]);
        minhh.push_back(ver[0]);
        for(int i=0;i<ver.size()-1;i++)
        {
            minhh.push_back(ver[i+1]-ver[i]);
            
        }
        minhh.push_back(w-ver[ver.size()-1]);
        for(int i=0;i<minhh.size();i++)
        {
            cout<<minhh[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<maxhh.size();i++)
        {
            cout<<maxhh[i]<<" ";
        }
        sort(maxhh.begin(),maxhh.end());
        sort(minhh.begin(),minhh.end());
        long long int a = (maxhh[maxhh.size()-1])%1000000007;
        long long int b= (minhh[minhh.size()-1])%1000000007;
        int ans = (a*b)%1000000007;
        return ans;
        
    }
};