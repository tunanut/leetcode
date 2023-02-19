class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,cur=end>>1;
        while(start<=end)
        {
            if(nums[cur]==target)
                return cur;
            else if(nums[cur]>target)
                end=cur-1;
            else
                start=cur+1;
            cur=(end+start)>>1;
        }
        return -1;
    }
};
