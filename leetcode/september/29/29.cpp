class AllOne {
    unordered_map<string, int> count;
    set<pair<int, string>> s;
public:
    AllOne() {
        count.clear();
    }
    
    void inc(string key) {
        int n = count[key];
        count[key]++;
        s.erase({ n, key });
        s.insert({ n+1, key });
    }
    
    void dec(string key) {
        int n = count[key];
        count[key]--;
        s.erase({ n, key });
        if(count[key] > 0) s.insert({ n-1, key });
        else count.erase(key);
    }
    
    string getMaxKey() {
        if(!s.empty()) return s.rbegin()->second;
        return "";
    }
    
    string getMinKey() {
        if(!s.empty()) return s.begin()->second;
        return "";
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
