class Solution {
public:
    void reverseString(vector<char>& s) {
        int ss=0,ee=s.size()-1;
        int tmp=0;
        while(ss<ee)
        {
            tmp=s[ee];
            s[ee--]=s[ss];
            s[ss++]=tmp;
        }
    }
};