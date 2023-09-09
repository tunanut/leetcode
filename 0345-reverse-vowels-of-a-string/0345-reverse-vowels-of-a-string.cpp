class Solution {
public:
    string reverseVowels(string str) {
        int lens = str.size();
        int s = 0;
        int e = lens;
        
        while(s < e)
        {
            char c = str[s];
            char cc = c;
            if(c <= 90)
                c += 32;
                
            if(c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
            {
                for(int i = e - 1; i >= 0; --i)
                {
                    char c = str[i];
                    if(c <= 90)
                        c += 32;
                    if(c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
                    {
                        e = i;
                        break;
                    }
                    
                    if(e <= s)
                        return str;
                }
                
                str[s] = str[e];
                str[e] = cc;
            }
            ++s;
        }
        
        return str;
    }
};