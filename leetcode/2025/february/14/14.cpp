class ProductOfNumbers {
    vector<int> ans;
    int i = 0;
public:
    ProductOfNumbers() {
        ans.push_back(1);
        i = 0;
    }
    
    void add(int num) {
        if(num == 0) {
            ans = { 1 };
            i = 0;
        }
        else {
            ans.push_back(ans[i] * num);
            i++;
        }
    }
    
    int getProduct(int k) {
        if(k > i) return 0;

        return ans[i] / ans[i - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
