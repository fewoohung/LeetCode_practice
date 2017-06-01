#include <vector>

class Solution {
public:
    int romanToInt(string s) {
        
        vector<int> temp;
        temp.clear();
        int strsize = s.size();
        int num=0;
        
        for (int j = 0; j < strsize; j++)
        {
            switch(s[j])
            {
                case 'I':
                    temp.push_back(1);
                    break;
                case 'V':
                    temp.push_back(5);
                    break;
                case 'X':
                    temp.push_back(10);
                    break;
                case 'L':
                    temp.push_back(50);
                    break;
                case 'C':
                    temp.push_back(100);
                    break;
                case 'D':
                    temp.push_back(500);
                    break;
                case 'M':
                    temp.push_back(1000);
                    break;
                default:
                    break;
            }
        }
        
        temp[strsize] = 0;

        //int i = 0;
        for(int x=0; x<temp.size(); x++)
        {
            if(temp[x]>=temp[x+1])
            {
                num = num + temp[x];
                //i++;
            }
            else
            {
                num = num - temp[x];
                //i++;
            }
        }

        return num;
        
    }
};