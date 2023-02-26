class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int s=0,e=s2.length(),ee=s1.length(),c=0;
        int m[26]={0,};
        int n[26]={0,};
        for(int i=0;i<ee;++i)
            ++m[s1[i]-'a'];
        for(int i=0;i<e;++i)
        {
            c=0;
            memcpy(n,m,sizeof(m));
            for(int j=i;j<e;++j)
            {
                if(n[s2[j]-'a']--==0)
                    break;
                if(++c==ee)
                    return true;
            }
        }
        return false;
    }
};