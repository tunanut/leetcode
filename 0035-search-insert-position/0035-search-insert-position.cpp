class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,c=e>>1;
        while(s<=e)
        {
            if(nums[c]==target)
                return c;
            if(nums[c]<target)
                s=c+1;
            else
                e=c-1;
            c=(e+s)>>1;
        }
        return s;
    }
};