#include <string>

class Solution {
public:
    string intToRoman(int num) {
        
        int value=0,counter=0;
        string roman[4][10] = {{"\0","I","II","III","IV","V","VI","VII","VIII","IX"},{"\0","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},{"\0","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},{"\0","M","MM","MMM","\0","\0","\0","\0","\0","\0"}};
        string result;
        string temp[5];
        
        while(num!=0)
        {
            value = num%10;
            num = num/10;
            temp[counter]=roman[counter][value];
            counter++;
        }
        while(counter!=0)
        {
            result+=temp[counter-1];
            counter--;
        }
        return result;
    }
};