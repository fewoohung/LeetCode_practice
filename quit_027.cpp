class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int size = nums.size();
        
        int counter=0;
        for (int j=0; j<size; j++)
        {
            if (val != nums[j])
            {
                nums[counter] = nums[j];
                counter++;
            }
        }
        
        return counter;
    }
};