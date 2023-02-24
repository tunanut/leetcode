class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount=0;
        int length=s.length()-1;
        while(maxcount<length||length>=0)
        {
            string ss="";
            ss+=s[length];
            int i=length-1;
            for(int i=length-1;i>=0;--i)
            {
                if(ss.find(s[i])!=string::npos)
                    break;
                ss+=s[i];
            }
            length=i;
            maxcount=max((int)ss.length(),maxcount);
        }
        return maxcount;
    }
};