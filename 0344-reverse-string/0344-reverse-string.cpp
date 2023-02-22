class Solution {
public:
    void reverseString(vector<char>& s) {
        int ss=0,ee=s.size()-1;
        while(ss<ee)
        {
            int tmp=s[ss];
            s[ss++]=s[ee];
            s[ee--]=tmp;
        }
    }
};