class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret(2);
        for(int i=0;i<numbers.size();++i)
        {
            int t=target-numbers[i];
            int s=0,e=numbers.size()-1,c=e>>1;
            while(s<=e)
            {
                if(i==c)
                    break;
                if(numbers[c]==t)
                {
                    ret[0]=min(i,c)+1;
                    ret[1]=max(i,c)+1;
                    return ret;
                }
                else if(numbers[c]>t)
                    e=c-1;
                else
                    s=c+1;
                c=(e+s)>>1;
            }
        }
        return ret;
    }
};