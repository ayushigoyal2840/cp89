class Solution {
public:
	int sumOddLengthSubarrays(vector<int>& arr) {
		int sum=0;
		for(int i=0;i<arr.size();i++){
			int currsum=0;
			for(int j=i;j<arr.size();j+=2){
				currsum+=arr[j];
				if(j!=i)currsum+=arr[j-1];
				sum+=currsum;
			}    
		}
		return sum;
	}
};