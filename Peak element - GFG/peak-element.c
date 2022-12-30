//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


// } Driver Code Ends
//User function Template for C

int peakElement(int arr[], int n)
{
   if(arr[0]>arr[1])
   return 0;
   if(arr[n-1]>arr[n-2])
   return n-1;
   
   for(int i=1;i<n-1;i++)
   {
       int a=arr[i];
       int b=arr[i-1];
       int c=arr[i+1];
       
       if((a>b) && (a>c))
       return i;
   }
   
   return -1;
}

//{ Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
    		if(n==1 && A==0)
    		    f=1;
    		else if(A==0 && a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 && a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		printf("%d\n", f);
		}
		
	}

	return 0;
}
// } Driver Code Ends