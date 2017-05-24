class Solution {
public:
    int reverse(int x) {
        
        int value=0;
		int temp=0;
		int check=0;
        while(x!=0)
        {
			temp = value;
            value = x%10 + value*10;
            x = x/10;
			check = value/10;            
            
			if(check != temp)
            {
                return 0;
            }
        }
        
        return value;
    }
};
