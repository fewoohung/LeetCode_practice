class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if(s.empty()) return 0;
        
        int size = s.size()-1;
        int count = 0;
        
        while(size >= 0 && s[size] == ' ')
        {
            size--;
        }
        while(size >= 0 && s[size] != ' ')
        {
            size--;
            count++;
        }
        
        return count;
    }
};