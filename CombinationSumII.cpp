class Solution {
public:
    
    
    void f(int ind,int target,vector<int> &ds,vector<vector<int>> &ans,vector<int> &candidates){
        if(target==0){//if target has reduced to 0 
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<candidates.size();i++){//checking for all possible from ind to the end
            if(i>ind &&candidates[i]==candidates[i-1])continue;//doing this so that duplicates do not come in the array 
            if(candidates[i]>target)break;//if more than target no need of taking toh 
            ds.push_back(candidates[i]);//less then so picked 
            f(i+1,target-candidates[i],ds,ans,candidates);//trabersal and recurssive call ahead made 
            ds.pop_back();//back tracking done to calculate the not pick case 
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        sort(candidates.begin(),candidates.end());//sorting for finding the presence of sum of target ==
        vector<vector<int>>ans;
        f(0,target,ds,ans,candidates);//2d array of the elemnt 
        return ans;
    }
};
https://leetcode.com/problems/combination-sum-ii/
