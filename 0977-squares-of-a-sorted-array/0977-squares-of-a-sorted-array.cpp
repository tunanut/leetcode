class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=0,e=nums.size()-1,c=e;
        vector<int> ret(e+1);
        while(c>=0)
        {
            if(abs(nums[s])>abs(nums[e]))
            {
                ret[c--]=nums[s]*nums[s];
                ++s;
            }
            else
            {
                ret[c--]=nums[e]*nums[e];
                --e;
            }
        }
        return ret;
    }
};