class Solution {
public:
    int climbStairs(int n) {
        long long o = 0;
        long long s = 1;
        while(n-- > 0)
        {
            long long t = o + s;
            o = s;
            s = t;
        }
        
        return s;
    }
};