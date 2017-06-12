class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int temp=0,max=nums[0];
        int size = nums.size();
        
        if (size == 1) return max;
        
        for(int i=0;i<size;i++)
        {
            temp = temp + nums[i];
            if (temp < 0)
            {
                if ( temp > max) max = temp;
                temp = 0;
            }
            else
            {
                if ( temp > max) max = temp;
            }
        }
        return max;
    }
};