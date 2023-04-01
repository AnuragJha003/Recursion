class Solution {
public:
    int myAtoi(string s) {
        int i = 0, flag = 0;
        while(i < s.size()) {
            if(s[i] == ' ') i++;   
            else break;       
        }//leading spaces(removing the extra leading spaces) 
        if(s[i] == '-') {
            flag = 1;
            i++;
        }//if - sign present we make flag=1 and i++ move ahead 
        else if(s[i] == '+') i++;

        long long num = 0;//long long to fit the answer in range 
        for(int j=i; j<s.size(); j++) {
            if(s[j] >= '0' and s[j] <= '9') {//if it is a character is a digit 
                num = num * 10 + (s[j] - '0');//char to int and adding it to hte num 
                if(num >= INT_MAX) break;   //if overflow out of bound gg  when multiplication with 10 done 
            }
            else break;
        }
        
        if(flag) num *= -1;//if a -ve sign is present just multiply with -1
        if(num <= INT_MIN) return INT_MIN;
        else if(num >= INT_MAX) return INT_MAX;//overflow condition gg 
        return num;
    }
};

https://leetcode.com/problems/string-to-integer-atoi/
