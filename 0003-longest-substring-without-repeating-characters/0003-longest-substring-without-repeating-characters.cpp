class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount=0;
        int length=s.length();
        while(length--)
        {
            string ss="";
            for(int i=length;i>=0;--i)
            {
                if(ss.find(s[i])!=string::npos)
                    break;
                ss+=s[i];
            }
            maxcount=max((int)ss.length(),maxcount);
        }
        return maxcount;
    }
};