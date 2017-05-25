class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int safe=0;
        safe = x;
        
        int value=0;
        int temp=0;
        int check=0;
        while(x!=0)
        {
            temp = value;
            value = x%10 + value*10;
            x = x/10;
            check = value/10;
            
            if(check != temp)
            {
                return 0;
            }
        }
        
        if(value == safe)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};