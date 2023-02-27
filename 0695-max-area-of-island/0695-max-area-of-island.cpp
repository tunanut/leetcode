class Solution {
    int** t=nullptr;
    int xx=0;
    int yy=0;
    int check(int x,int y)
    {
        int ret=1;
        *(*(t+y)+x)=0;
        if((x-1>=0)&&(*(*(t+y)+x-1)))
            ret+=check(x-1,y);
        if((x+1<xx)&&(*(*(t+y)+x+1)))
            ret+=check(x+1,y);
        if((y-1>=0)&&(*(*(t+y-1)+x)))
            ret+=check(x,y-1);
        if((y+1<yy)&&(*(*(t+y+1)+x)))
            ret+=check(x,y+1);
        return ret;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        xx=grid[0].size();
        yy=grid.size();
        int m=0;
        t=new int*[yy];
        for(int i=0;i<yy;++i)
            t[i]=&grid[i][0];
        
        for(int y=0;y<yy;++y)
        {
            for(int x=0;x<xx;++x)
            {
                if(*(*(t+y)+x))
                    m=max(m,check(x,y));
            }
        }
        return m;
    }
};