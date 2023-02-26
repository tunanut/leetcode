class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int s=0,e=s2.length(),ee=s1.length(),c=0;
        int m[26]={0,};
        int n[26]={0,};
        for(int i=0;i<ee;++i)
        {
            ++m[s1[i]-'a'];
            ++n[s2[i]-'a'];
        }
        if(memcmp(m,n,sizeof(m))==0)
            return true;
        for(int i=ee;i<e;++i)
        {
            ++n[s2[i]-'a'];
            --n[s2[i-ee]-'a'];
            if(memcmp(m,n,sizeof(m))==0)
                return true;
        }
        return false;
    }
};