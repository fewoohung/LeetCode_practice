class Solution {
public:
    string addBinary(string a, string b) {
        
        int size_a = a.size();
        int size_b = b.size();
        
        int i = size_a-1;
        int j = size_b-1;
        int temp = 0, size_result = 0;
        
        int check_a = size_a - size_b - 1;
        int check_b = size_b - size_a - 1;
        
        // how to create a null string.
        string result;
        if(size_a >= size_b)
        {
            result = a;
            size_result = i;
            if(size_a > size_b)b.insert(b.begin(),check_a+1,'0');
        }
        else
        {
            result = b;
            size_result = j;
            a.insert(a.begin(),check_b+1,'0');
        }
        
        while(size_result >=0)
        {
            
            if(a[size_result] == '0' && b[size_result] == '0')
            {
                if(temp == 1)
                {
                    result[size_result] = '1';
                }
                else
                {
                    result[size_result] = '0';
                }
                temp = 0;
            }
            if((a[size_result] == '1' && b[size_result] == '0') || (a[size_result] == '0' && b[size_result] == '1'))
            {
                if(temp == 1)
                {
                    result[size_result] = '0';
                    temp = 1;
                }
                else
                {
                    result[size_result] = '1';
                    temp = 0;
                }
            }
            if(a[size_result] == '1' && b[size_result] == '1')
            {
                if(temp == 1)
                {
                    result[size_result] = '1';
                    temp = 1;
                }
                else
                {
                    result[size_result] = '0';
                    temp = 1;
                }
            }
            size_result--;
        }        
        
        if(temp == 1)
        {
            result.insert(result.begin(),'1');
        }
        return result;
        
    }
};
