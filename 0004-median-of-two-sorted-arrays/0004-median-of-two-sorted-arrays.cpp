class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int m = a.size();
		int n = b.size();
		
		// if size of vector a or b is 0. (corner case)
        if(n==0)
        {
            if(m%2!=0)
                return (double)(a[m/2]);
            else
            {
                double e1 = a[m/2];
                double e2 = a[m/2-1];
                return (double)( (e1+e2)/2  );
            }
        }
        
        if(m==0)
        {
            if(n&1)
                return (double)(b[n/2]);
            else
            {
                double e1 = b[n/2];
                double e2 = b[n/2-1];
                return (double)( (e1+e2)/2  );
            }

        }
        
        int k = (m+n)/2;
        int kprev = k+1;
        int aa=0, bb=0;
        int i=0, j=0;
        while((i<m || j<n) && kprev>0)
        {
			// Case when all elements of vector a are smaller than first element of vector b.
			// i.e. a = {1,3,5} & b = {7,9,13,26};
            if(i==m)
            {
                k--;
                kprev--;

                if(kprev==0)
                    bb=b[j];
                if(k==0)
                    aa=b[j];
                j++;
                continue;
            }
			
			// Case when all elements of vector b are smaller than first element of vector a.
			// i.e. a = {9,12,21,33} & b = {3,5,7};
            if(j==n)
            {
                k--;
                kprev--;

                if(kprev==0)
                    bb=a[i];
                if(k==0)
                    aa=a[i];
                i++;
                continue;
            }


            if(a[i]<b[j])
            {
                k--;
                kprev--;

                if(kprev==0)
                    bb=a[i];
                if(k==0)
                    aa=a[i];
                i++;
            }
            else if(a[i]>b[j])
            {
                k--;
                kprev--;

                if(kprev==0)
                    bb=b[j];
                if(k==0)
                    aa=b[j];
                j++;
            }
            else if(a[i]==b[j])
            {   
                k--; kprev--;
                if(kprev==0)
                    bb=a[i];
                if(k==0)
                    aa=a[i];

                k--; kprev--;
                if(kprev==0)
                    bb=a[i];
                if(k==0)
                    aa=a[i];

                i++; j++; 
            }
        }
        if((m+n)&1)
            return bb;
        else
        {
            double ans = (double)(aa+bb)/2;
            return ans;
        }
    }
};