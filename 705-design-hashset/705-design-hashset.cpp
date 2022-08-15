class MyHashSet {
public:
    map<int,int>mp;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(mp[key]==0)
        mp[key]++;
    }
    
    void remove(int key) {
        if(mp[key]>0)
        mp[key]--;
    }
    
    bool contains(int key) {
        if(mp[key]>0)
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */