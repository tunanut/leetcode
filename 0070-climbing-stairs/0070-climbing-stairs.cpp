class Solution {
public:
    int climbStairs(int n) {
        int o = 0;
        int s = 1;
        while(n-- > 0)
        {
            int t = o + s;
            o = s;
            s = t;
        }
        
        return s;
    }
};