class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 0;
        int z = 0;
        for(auto& iter : nums)
        {
            if(iter)
            {
                if(!p)
                    p = 1;
                p *= iter;
            }
            else
                ++z;
        }
        
        vector<int> answer;
        if(z > 1)
            for(auto& iter : nums)
                answer.push_back(0);
        else if(z == 1)
            for(auto& iter : nums)
            {
                if(!iter)
                    answer.push_back(p);
                else
                    answer.push_back(0);
            }
        else
            for(auto& iter : nums)
                answer.push_back(p / iter);
        
        return answer;
    }
};