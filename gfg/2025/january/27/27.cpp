//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache {
  private:
    int capacity;
    list<pair<int, int>> List;
    unordered_map<int, list<pair<int, int>>::iterator> cache;
  public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) {
        // code here
        capacity = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        if(cache.find(key) == cache.end()) return -1;
        
        auto it = cache[key];
        List.splice(List.begin(), List, it);
        
        return it->second;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
        if(cache.find(key) != cache.end()) {
            auto it = cache[key];
            it->second = value;
            List.splice(List.begin(), List, it);
            return;
        }
        
        if(List.size() == capacity) {
            auto top = List.back();
            cache.erase(top.first);
            List.pop_back();
        }
        
        List.emplace_front(key, value);
        cache[key] = List.begin();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--) {
            string q;
            cin >> q;
            if (q == "PUT") {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->put(key, value);
            } else {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
