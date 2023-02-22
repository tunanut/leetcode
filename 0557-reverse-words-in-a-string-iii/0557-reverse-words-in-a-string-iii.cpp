class Solution {
public:
    string reverseWords(string s) {
        string ret(s);
        int ss=0,ee=s.find(' '),c=0;
        while(ee!=string::npos)
        {
            for(int i=ee-1;i>=ss;--i)
                swap(ret[c++],s[i]);
            ret[c++]=' ';
            ss=ee+1;
            ee=s.find(' ',ss);
        }
        for(int i=s.length()-1;c<s.length();--i)
            swap(ret[c++],s[i]);
        return ret;
    }
};