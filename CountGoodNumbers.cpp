#define mod 1000000007
class Solution {
public:
    
    //GOOD IF EVN AT EVEN INDICES AND PRIME NUMBERS AT ODD INDICES
    
    long long power(long long x,long long y){
        if(y==0)return 1;
        long long ans=power(x,y/2);
        ans*=ans;
        ans%=mod;
        if(y%2)ans*=x;
        ans%=mod;
        return ans;
    }//BINARY EXPONENTIATION USED FOR POWER CALCULATION  
    int countGoodNumbers(long long n) {
        /*long long int ans=5;
        for(int i=1;i<n;i++){
            if(i%2==0){
                ans=ans*5;
            }
            else{
                ans=ans*4;
            }
        }//4 PRIME AND 5 EVEN IN 0-9 
        return ans%1000000007;
   /*NAIVE APPROACH */
        //ANSWER WILL BE 5^EVEN INDIXES AND 4^ODD INDICES
       long long odd=n/2;//no of odd indices 
        long long even=n/2+ n%2;//no of even indices 
        return (power(5,even)*power(4,odd))%mod;
    }
};
https://leetcode.com/problems/count-good-numbers/
