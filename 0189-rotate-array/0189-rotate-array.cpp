class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int kk=k%nums.size();
        int m=nums.size()-kk;
        int szm=sizeof(int)*m;
        int szkk=sizeof(int)*kk;
        if(kk>m)
        {
            int*tmp=new int[kk];
            memcpy(tmp,&nums[m],szkk);
            memcpy(&nums[kk],&nums[0],szm);
            memcpy(&nums[0],tmp,szkk);
            delete []tmp;
        }
        else
        {
            int*tmp=new int[m];
            memcpy(tmp,&nums[0],szm);
            memcpy(&nums[0],&nums[m],szkk);
            memcpy(&nums[kk],tmp,szm);
            delete []tmp;
        }
    }
};