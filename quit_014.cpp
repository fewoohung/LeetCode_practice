#include <string>
#include <cstring>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string empty = "";
        if (strs.empty()) return empty;
        string result;
        result = strs[0];
        if (result.empty()) return empty;
        string temp;
        string str;
        int i = 0;
        for (i=1; i<strs.size(); i++)
        {
            //str.clear();
            str = strs[i];
            if (str.empty()) return empty;
            
            int j = 0, check = 0;
			int size = 0;
			if(result.size() >= str.size())
			{
				size = str.size();
			}
			else
			{
				size = result.size();
			}
            while (j!=size)
            {
                if (result[j] == str[j])
                {
                    temp = result.substr(0,j+1);
                    check++;
                }
                if (check == 0)
                {
                    return empty;
                }
                j++;
            }
            result = temp;
        }
        return result;
    }
};