class Solution {
public:
    void createExp(int index,long long currSum,long long prevNum,string exp,vector<string>& ans,string& num,int& target){
        int n=num.size();
        if(index==n){
            if(currSum==target)
                ans.push_back(exp);
            return;
        }
        string curr="";
        long long currNum=0;
        for(int i=index;i<n;i++){
            if(i>index && num[index]=='0')break;
            curr+=num[i];//adding to the string 
            currNum=currNum*10+(num[i]-'0');//adding the digit to the number 
            if(index==0){//if first time then add in here 
                createExp(i+1,currSum+currNum,currNum,exp+curr,ans,num,target);
            }
            else{
                createExp(i+1,currSum+currNum,currNum,exp+"+"+curr,ans,num,target);//adding the + sign to the string current sum +currnum ,prev becomes curr for the recurssive call add + to the string and add curr to it rest same
                createExp(i+1,currSum-currNum,-currNum,exp+"-"+curr,ans,num,target);
                //just -
                createExp(i+1,currSum-prevNum+currNum*prevNum,currNum*prevNum,exp+"*"+curr,ans,num,target);
                //for * part 
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        createExp(0,0,0,"",ans,num,target);
        return ans;
    }
};
https://leetcode.com/problems/expression-add-operators/
