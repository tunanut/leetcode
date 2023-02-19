class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=0,e=nums.size()-1,c=e;
        int ss=0,es=0;
        vector<int> ret(e+1);
        while(c>=0)
        {
            ss=nums[s]*nums[s];
            es=nums[e]*nums[e];
            
            if(ss>es)
            {
                ret[c--]=ss;
                ++s;
            }
            else
            {
                ret[c--]=es;
                --e;
            }
        }
        return ret;
    }
};