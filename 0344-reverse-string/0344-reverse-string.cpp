class Solution {
public:
    void reverseString(vector<char>& s) {
        int ss=0,ee=s.size()-1;
        while(ss<ee)
        {
            s[ss]=s[ss]^s[ee];
            s[ee]=s[ss]^s[ee];
            s[ss++]=s[ss]^s[ee--];
        }
    }
};