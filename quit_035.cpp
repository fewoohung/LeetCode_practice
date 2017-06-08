class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i = 0;
        int size = nums.size();
        
        while(i!=size)
        {
            if(nums[i] == target)
            {
                return i;
            }
            if(nums[i] != target && nums[i] > target)
            {
                return i;
            }
            if(nums[i] != target && nums[i] < target && i+1 == size)
            {
                return i+1;
            }
            i++;
        }
        
    }
};