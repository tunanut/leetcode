class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size(), s2 = word2.size(), c1=0, c2=0;
        string ret = "";
        while(c1 < s1 || c2 < s2)
        {
            if(c1 < s1)
                ret.push_back(word1[c1++]);
            if(c2 < s2)
                ret.push_back(word2[c2++]);
        }
        return ret;
    }
};