class Solution {
    public:
int value(char r)
    {
        switch (r) {
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return 0;
        }
    }

    int romanToInt(string s)
    {
        int integer=0;
        for(int i=0;i<s.length();i++)
        {
            int s1=value(s[i]);
            if(i+1<s.length())
            {
                int s2=value(s[i+1]);

                if(s1>=s2)
                {
                    integer=integer+s1;
                }
                else
                {
                    integer=integer+s2-s1;
                    i++;
                }
            }
            else {
                integer += s1;
            }
        }
        return integer;
    }
};