#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        
		// long have greater size than int. Long can keep the number which overflow with int.
        long value=0;
        int max=INT_MAX;
        int min=INT_MIN;
        while(x!=0)
        {
            value = x%10 + value*10;
            x = x/10;
            
            if((value > max) || (value < min))
            {
                value = 0;
                return 0;
            }
        }
        
        return value;
    }
};