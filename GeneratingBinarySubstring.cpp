https://leetcode.com/problems/find-unique-binary-string/
class Solution {
public:
    vector<string> res;
    void solve(vector<string>& res,string op,int n){
        if(n==0){
            res.push_back(op);
            return;
        }
        solve(res,op+'0',n-1);
        solve(res,op+'1',n-1);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        solve(res,"",n);
        map<string,int>mp;
        for(auto x:nums)mp[x]++;
        for(auto x:res){
            if(mp.find(x)==mp.end()){
                return x;
            }
        }
        return "";
    }
};

class Solution{
public:

   void solve(int n,string op){
       if(n==0){
           cout<<op<<" ";
           return;
       }
       solve(n-1,op+'0');
       if(op.back()!='1'){
           //if it is not a consective 1 case 
           solve(n-1,op+'1');
       }
   }
    void generateBinaryStrings(int num){
        //Write your code
        solve(num,"");
    }
};
https://practice.geeksforgeeks.org/problems/generate-all-binary-strings/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=generate-all-binary-strings
