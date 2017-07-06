class Solution {
public:
    int mySqrt(int x) {
        
        // newton rule        
        if(x==0) return x;
        
        long result = x;
        while(result > (x / result))
        {
            result = (result + (x / result)) / 2;
        }        
        
        return result;
    }
};