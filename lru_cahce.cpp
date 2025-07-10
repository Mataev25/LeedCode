class LRUCache {
private:
    int data;
    list<int> list_lru;
    unordered_map<int,pair<int,list<int>::iterator>> cache;
public:
    LRUCache(int capacity): data{capacity} {}
    
    int get(int key) {
        if (!cache.count(key)) return -1;
        list_lru.erase(cache[key].second);
        list_lru.push_front(key);
        cache[key].second = list_lru.begin();
        return cache[key].first;
    }
    
    void put(int key, int value) {
            if (cache.count(key)) {
            list_lru.erase(cache[key].second);
            list_lru.push_front(key);
            cache[key] = { value,list_lru.begin() };
        }
        else {
            if (cache.size() >= data) {
                int old_key = list_lru.back();
                cache.erase(old_key);
                list_lru.pop_back();
            }
            list_lru.push_front(key);
            cache[key] = { value,list_lru.begin() };
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */