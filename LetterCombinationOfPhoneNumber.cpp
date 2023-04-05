class Solution {
public:
    void f(int num,string output,vector<string>& ans,vector<string>& res){
        if(num==0){
            res.push_back(output);
            return;
        }
        int n1=num%10;//trying possible combination for the last digit of the nums
        string s1=ans[n1];//getting the possible mapping at n1 ind3x
        for(int i=0;i<s1.size();i++){//traversing ver the mapping so that we get all possible combinations wrt to the string mapping 
            f(num/10,s1[i]+output,ans,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;//mapping
        vector<string> res;//output
        if(digits==""){
            return ans;
        }
        /*map<int,vector<char>> mp;
        mp[2]={a,b,c};
        mp[3]={d,e,f};
        mp[4]={g,h,i};
        mp[5]={j,k,l};
        mp[6]={m,n,o};
        mp[7]={p,q,r,s};
        mp[8]={t,u,v};
        mp[9]={w,x,y,z};*/
        string output="";//each possible combination 
        ans={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};//this is the mapping done according to the index in here 
        f(stoi(digits),output,ans,res);//recurssive call with n output string which is possible combination 
        //ans which is the mapping vector and res which is the answer which we r gonna return 
        return res;//return this res 

    }
};

https://leetcode.com/problems/letter-combinations-of-a-phone-number/
