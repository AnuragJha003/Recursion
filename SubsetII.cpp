class Solution {
public:
    vector<vector<int>> result;//FINAL ANS
    set<vector<int>>s;//UNIQUE SET 
    //global declaration is done can be used anywhere in the class
    void solve(vector<int>nums, vector<int> temp){
        if(nums.size()==0){//IF ALL ELMNTS CONSIDERED AND SIZE==0 
            s.insert(temp);//THEN INSERT THE TEMP WHICH IS POSSIBLE SO THE INSERT IT INTO TEMP AND UNIQUE SUBSET HONA CHAHIYE AS SOL MUST NOT CONTAIN DUPLICATE SUBSET
            return;//RETURN THIS GG 
        }
        vector<int>op1;//SUBSET WITH POSSIBILIY OF NOT BEING TAKEN 
        vector<int>op2;//SUBSET WITH POSSIBILITY OF BEING TAKEN 
        op1 = temp;//INITILAISED WITH TEMP 
        op2 = temp;//INITILAISED WITH TENP
        op2.push_back(nums[0]);//PUSHING BACK IN OP2 THAT IS TAKING THIS PARTICULAR ELMNT IN HERE
        nums.erase(nums.begin()+0);//ERASING THAT ELMNT AS THE ELEMNT IS ALREDADY TAKEN/NOT TAKEN
        solve(nums, op1);//RECURSSIVE CALL WITH NOT TAKEN 
        solve(nums, op2);//,,,WITH TAKEN 
        //return;//RETURN THIS 
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;//FOR STORING THE INDIVUAL SUBSET 
        solve(nums, temp);
        for(auto i:s){
            result.push_back(i);
        }//FINAL RESULT
        return result;
    }
};
https://leetcode.com/problems/subsets-ii/
