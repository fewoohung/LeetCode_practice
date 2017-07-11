class Solution {
public:
    int climbStairs(int n) {
        
        int step1 = 1, step2 = 1;
        int result = 0;
        
        for(int i = 1; i < n; i++)
        {
            step2 = step1 + step2;
            step1 = step2 - step1;
            
        }
        
        return step2;
        
    }
};