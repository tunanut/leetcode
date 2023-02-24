class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int length=s.length();
        for(int i=0;i<length;++i)
        {
            int c[128]={0,};
            int n=1;
            ++c[s[i]];
            for(int j=i+1;j<length;++j)
            {
                if(c[s[j]])
                    break;
                ++c[s[j]];
                ++n;
            }
            maxlen=max(n,maxlen);
        }
        return maxlen;
    }
};