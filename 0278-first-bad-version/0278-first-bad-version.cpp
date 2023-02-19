// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,cur=n>>1;
        while(1)
        {
            if(!isBadVersion(cur))
            {
                if(isBadVersion(cur+1))
                    return cur+1;
                s=cur+1;
            }
            else
                n=cur-1;
            cur=((n-s)>>1)+s;
        }
    }
};