class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        
        vector<int> vv;
        vv.push_back(1);
        
        v.push_back(vv);
        
        for(int r = 1; r < numRows; ++r)
        {
            auto pr = v[r-1];
            vector<int> a;
            a.push_back(1);
            for(int i = 0; i < pr.size() - 1; ++i)
                a.push_back(pr[i] + pr[i+1]);
            a.push_back(1);
            v.push_back(a);
        }
        
        
        
        
        
        return v;
    }
};