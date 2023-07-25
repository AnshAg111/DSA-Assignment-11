class ProductOfNumbers {
    vector<int>product;
    int i=0;
public:
    ProductOfNumbers() {
        product.push_back(1);
    }
    
    void add(int num) {
        if(num!=0){
            product.push_back(num*product[i]);
            i++;
        }
        else{
            product.clear();
            product.push_back(1);
            i=0;
        }
    }
    
    int getProduct(int k) {
        if(i<k) return 0;
        return product[i]/product[i-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */