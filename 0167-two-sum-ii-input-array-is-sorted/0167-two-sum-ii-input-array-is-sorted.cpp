class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0,e=numbers.size()-1;
        while(s<e)
        {
            int c=numbers[s]+numbers[e];
            if(c==target)
                return vector<int>{s+1,e+1};
            else if(c>target)
                --e;
            else
                ++s;
        }
        return vector<int>{0, 0};
    }
};