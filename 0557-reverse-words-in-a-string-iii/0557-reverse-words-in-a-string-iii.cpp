class Solution {
public:
    string reverseWords(string s) {
        string ret(s);
        int ss=0,ee=s.find(' '),c=0;
        while(ee!=string::npos)
        {
            for(int i=ee-1;i>=0;--i)
                ret[c++]=s[i];
            ret[c++]=' ';
            ss=ee+1;
            s=s.substr(ss,s.length()-ss);
            ee=s.find(' ');
        }
        for(int i=s.length()-1;i>=0;--i)
            ret[c++]=s[i];
        return ret;
    }
};