class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(!n)
            return true;
        
        int lenf = flowerbed.size();
        
        for(int i = 0; i < lenf; ++i)
        {
            if(flowerbed[i] == 0)
            {
                bool check = false;
                if(i != 0)
                    check |= flowerbed[i-1];
                if(i != lenf - 1)
                    check |= flowerbed[i+1];
                    
                if(check == 0)
                {
                    flowerbed[i] = 1;
                    --n;
                    if(n == 0)
                        return true;
                }
            }
        }
        
        return false;
    }
};