class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int size = digits.size();
        int i = size-1;
        int temp = 0;
        
        for(i; i>= 0; i--)
        {
            digits[i] = digits[i] + temp;
            
            if(i == size -1)
            {
                digits[i]++;
            }
            
            if(digits[i] == 10)
            {
                digits[i] = 0;
                temp = 1;
            }
            else // reset temp
            {
                temp = 0;
            }
        }
        if(temp == 1)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};