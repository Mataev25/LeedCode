class RandomizedSet {
public:
    RandomizedSet() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
    
    bool insert(int val) {
        if (idx.count(val))
	        return false;
        idx[val] = brr.size();
        brr.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        auto it = idx.find(val);
        if (it == idx.end())
            return false;
        const int l = brr.back();
        const size_t p = it->second;
        brr[p] = l;
        idx[l] = p;

        brr.pop_back();
        idx.erase(it);
        return true;
    }
    
    int getRandom() {
    
        return brr[rand() % brr.size()];
    }
private:
    vector<int> brr;
    unordered_map<int, size_t> idx;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */