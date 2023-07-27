class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>next, prev;
        stack<pair<int, int>>s, t;
        int ans=0, n=heights.size();
        for(int i=0; i<n; i++){
            while(!s.empty() and heights[i]<=s.top().first) s.pop();
            if(s.empty()) prev.push_back(-1);
            else prev.push_back(s.top().second);
            s.push(make_pair(heights[i], i));
            while(!t.empty() and heights[n-1-i]<=t.top().first) t.pop();
            if(t.empty()) next.push_back(n);
            else next.push_back(t.top().second);
            t.push(make_pair(heights[n-1-i], n-1-i));
        }
        reverse(next.begin(), next.end());
        for(int i=0; i<n; i++) ans=max(ans, heights[i]*(next[i]-prev[i]-1));
        return ans;
    }
};