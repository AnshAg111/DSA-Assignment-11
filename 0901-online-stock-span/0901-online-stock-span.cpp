class StockSpanner {
    stack<pair<int,int>>s;
public:
    StockSpanner() {
        s.push(make_pair(100001, 1));
    }
    
    int next(int price) {
        int span=1;
        while(price>=s.top().first){
            span+=s.top().second;
            s.pop();
        }
        s.push(make_pair(price, span));
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */