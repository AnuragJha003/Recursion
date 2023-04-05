class Solution {
public:
    void findComb(int ind,int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);//INSERTING THE DATA STRUNCTURE
            }
            return ;
        }
        //pick up the element
        if(arr[ind]<=target){//IF LESS THAN 
            ds.push_back(arr[ind]);//INSERT THAT CPABLE ELEMENT IN THE DATA STRUCTURE CREATED
            findComb(ind,target-arr[ind],arr,ans,ds);//TARGET NOW BCMS TARGET -ARR[I] AS ARR[I] IS TAKEN INTO CONSIDERATION FR THE SUM RECURSSION PROCESS
            ds.pop_back();//REMOVING THAT ALREADY CONSIDERED ELEMNT FROM THE DS OTHERWISE IT WILL BE STORED TWICE EVEN AFTR ITS IOPERATION IS DONE BAKCTRACKING PROCESS
        }
        findComb(ind+1,target,arr,ans,ds);//HAVE NOT PICKED UP AND MOVE UP TO THE NEXT INDEX THAT PARTICULAR INDEX IS NEGLECTED AND IT IS CONSIDERED FROM THE NEXT INDEX..RECURSSION PROCESS
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findComb(0,target,candidates,ans,ds);
        return ans;
    }
};
https://leetcode.com/problems/combination-sum/
