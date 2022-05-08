class NestedIterator {
public:
    vector<NestedInteger>result;
    int i=0;
    void helper(vector<NestedInteger> nestedList){
        for(int i=0;i<nestedList.size();i++){
            if(nestedList[i].isInteger()){
                result.push_back(nestedList[i].getInteger());
            }
            else 
            {
                helper(nestedList[i].getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
      helper(nestedList);  
    }
    
    int next() {
       int res= result[i].getInteger();
        i++;
        return res;
    }
    
    bool hasNext() {
        if(i==result.size())
            return false;
        return true;
    }
};