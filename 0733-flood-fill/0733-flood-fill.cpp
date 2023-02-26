class Solution {
public:
    void check(int** t,int** b,int x,int y,int xx,int yy,int n,int c)
    {
        *(*(b+y)+x)=1;
        if((x+1<xx)&&(*(*(b+y)+x+1))==0&&(*(*(t+y)+x+1)==n))
            check(t,b,x+1,y,xx,yy,n,c);
        if((x-1>=0)&&(*(*(b+y)+x-1))==0&&(*(*(t+y)+x-1)==n))
            check(t,b,x-1,y,xx,yy,n,c);
        if((y+1<yy)&&(*(*(b+y+1)+x))==0&&(*(*(t+y+1)+x)==n))
            check(t,b,x,y+1,xx,yy,n,c);
        if((y-1>=0)&&(*(*(b+y-1)+x))==0&&(*(*(t+y-1)+x)==n))
            check(t,b,x,y-1,xx,yy,n,c);
        *(*(t+y)+x)=c;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image[sr][sc];
        if(n==color)
            return image;
        int* bb=new int[image.size()*image[0].size()]{};
        int** b=new int*[image.size()]{};
        int** t=new int*[image.size()];
        for(int i=0;i<image.size();++i)
        {
            t[i]=&image[i][0];
            b[i]=&bb[i*image[0].size()];
        }
        check(t,b,sc,sr,image[0].size(),image.size(),n,color);
        return image;
    }
};