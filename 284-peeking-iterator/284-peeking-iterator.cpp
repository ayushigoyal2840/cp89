/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    int i=0;
    vector<int>ans;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        for(int i=0;i<nums.size();i++)
            ans.push_back(nums[i]);
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
        
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        // if(i+1<ans.size())
        // {
        // cout<<i<<endl;
            return ans[i];
        // }
        
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
        i++;
	    return ans[i-1];
	}
    
	
	bool hasNext() const {
	    if(i<ans.size())
            return true;
        return false;
	}
};