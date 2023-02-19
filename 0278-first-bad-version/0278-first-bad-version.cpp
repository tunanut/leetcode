// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,cur=n>>1;
        while(s<n)
        {
            if(isBadVersion(cur))
                n=cur-1;
            else
                s=cur+1;
            cur=((n-s)>>1)+s;
        }
        return isBadVersion(n)?n:n+1;
    }
};