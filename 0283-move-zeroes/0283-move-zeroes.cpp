class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0,e=nums.size();
        for(int i=0;i<e;++i)
        {
            if(nums[i]!=0)
                swap(nums[s++],nums[i]);
        }
    }
};