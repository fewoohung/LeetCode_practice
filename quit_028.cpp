class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int size_haystack = haystack.size(), size_needle = needle.size();
        
        if (needle.empty()) return 0;
        if (size_haystack < size_needle) return -1;
        
        int i = 0, temp = 0;
        while (i!=size_haystack)
        {
            int j = 0;
            temp = i;
            while (haystack[i]==needle[j] && j!=size_needle)
            {
                i++;
                j++;
            }
            if (j == size_needle) return temp;
            if (size_haystack == size_needle) return -1;
            
            i = temp;
            i++;
        }
        
        return -1;
        
    }
};