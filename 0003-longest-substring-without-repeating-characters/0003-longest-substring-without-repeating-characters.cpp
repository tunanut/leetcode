class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int length=s.length();
        for(int i=0;i<length;++i)
        {
            string ss="";
            ss+=s[i];
            for(int j=i+1;j<length;++j)
            {
                int idx=ss.find(s[j]);
                if(idx!=string::npos)
                {
                    i+=idx;
                    break;
                }
                ss+=s[j];
            }
            maxlen=max((int)ss.length(),maxlen);
            if(maxlen>=(length-i))
                break;
        }
        return maxlen;
    }
};