class Solution {
public:
    string reverseWords(string s) {
        int lens = s.size();
        std::string result="";
        
        std::string sub="";
        for (int i = 0; i < lens; ++i)
        {
            if(s[i] == ' ' && !sub.empty())
            {
                if(!result.empty())
                    result.insert(0," ");
                result.insert(0, sub);
                sub = "";
            }
            else if(s[i] != ' ')
                sub += s[i];
        }
        
        if(!sub.empty())
        {
            if(!result.empty())
                result.insert(0," ");
            result.insert(0, sub);
        }
        
        return result;
    }
};