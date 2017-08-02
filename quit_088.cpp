class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int count1 = m - 1;
        int count2 = n-1;
        int count_new = m + n - 1;
                
        while(count1 >= 0 && count2 >= 0)
        {
            if(nums1[count1] > nums2[count2])
            {
                nums1[count_new] = nums1[count1];
                count_new--;
                count1--;
            }
            else
            {
                nums1[count_new] = nums2[count2];
                count_new--;
                count2--;
            }
        }
        
        // when nums1 is null.
        while(count2 >= 0)
        {
            nums1[count_new] = nums2[count2];
            count_new--;
            count2--;
        }
        
    }
};