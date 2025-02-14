class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers() {
        prefix.clear();
        prefix.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            prefix.clear();
            prefix.push_back(1);
        }
        else{
            prefix.push_back(prefix.back()*num);    
        }
    }
    
    int getProduct(int k) {
        if(prefix.size()<=k) return 0;
        int len = prefix.size();
        return prefix[len-1]/prefix[len-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */