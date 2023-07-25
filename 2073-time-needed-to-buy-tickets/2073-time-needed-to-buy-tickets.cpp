class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t=0, i=0, n=tickets.size();
        while(tickets[k]!=0){
            if(tickets[i]!=0){
                t++;
                tickets[i]--;
            } 
            i++;
            i%=n;
        }
        return t;
    }
};