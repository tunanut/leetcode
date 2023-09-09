class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        for(auto& iter : candies)
            max = std::max(iter, max);
        
        vector<bool> result;
        for(auto& iter : candies)
            result.push_back(max <= iter + extraCandies ? true : false);
        
        return result;
    }
};