class Solution {
public:
    string addBinary(string a, string b) {
        
        int size_a = a.size();
        int size_b = b.size();
        
        int i = size_a-1;
        int j = size_b-1;
        int temp = 0, size_result = 0;
        int check = 0;
        
        // how to create a null string.
        string result;
        if(size_a >= size_b)
        {
            result = a;
            size_result = i;
            check = 1;
        }
        else
        {
            result = b;
            size_result = j;
            check = 2;
        }
        //result.resize(size_result,'0');
        
        int check_a = size_a - size_b - 1;
        int check_b = size_b - size_a - 1;
        
        while(i >=0 || j>=0)
        {
            
            if(a[i] == '0' && b[j] == '0')
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
            if((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
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
            if(a[i] == '1' && b[j] == '1')
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
            i--;
            j--;
        }
        
        if(size_a != size_b)
        {
            if(check == 1)
            {
                while(check_a >= 0)
                {
                    if(temp == 1 && result[check_a] == '1')
                    {
                        result[check_a] = '0';
                        temp = 1;
                    }
                    if((temp == 0 && result[check_a] == '1') || (temp == 1 && result[check_a] == '0'))
                    {
                        result[check_a] = '1';
                        temp = 0;
                    }
                    if(temp == 0 && result[check_a] == '0')
                    {
                        result[check_a] = '0';
                        temp = 0;
                    }
                    check_a--;
                }
            }
            if(check == 2)
            {
                while(check_b >= 0)
                {
                    if(temp == 1 && result[check_b] == '1')
                    {
                        result[check_b] = '0';
                        temp = 1;
                    }
                    if((temp == 0 && result[check_b] == '1') || (temp == 1 && result[check_b] == '0'))
                    {
                        result[check_b] = '1';
                        temp = 0;
                    }
                    if(temp == 0 && result[check_b] == '0')
                    {
                        result[check_b] = '0';
                        temp = 0;
                    }
                    check_b--;
                }
            }
        }
		// string result size will mismatch in first while (while(i >=0 || j>=0)) function.
        
        
        if(temp == 1)
        {
            result.insert(result.begin(),'1');
        }
        return result;
        
    }
};