class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.size();
        int len2 = str2.size();

        std::string base = "";
        std::string target = "";
        int lenb = 0;
        int lent = 0;

        if (len1 < len2)
        {
            base = str1;
            lenb = len1;
            target = str2;
            lent = len2;
        }
        else
        {
            base = str2;
            lenb = len2;
            target = str1;
            lent = len1;
        }

        std::string gcd = "";
        int i = 1;
        while(true)
        {
            int lens = lenb / i;
            if(lens < 1)
                break;

            std::string sub = base.substr(0, lens);

            // base check
            bool c = check(sub, base);

            //target check
            c &= check(sub, target);

            if(c)
                return sub;

            ++i;
            if (lenb % i)
                ++i;
        }

        return "";
    }
    
    bool check(std::string gcd, std::string target)
    {
        int leng = gcd.size();
        int lent = target.size();

        int i = 0;
        for (; i + leng <= lent; i += leng)
        {
            std::string sub = target.substr(i, leng);
            if(gcd != sub)
                return false;
        }

        if(i < lent)
            return false;

        return true;
    }
};