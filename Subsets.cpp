class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int>>& ans){
        if(i >= nums.size()){   // i = index
            ans.push_back(output);//OUTPUT IS A SUBSET SO PUSH BACK IN THE ANS
            return;
        }
        // exclude
        solve(nums, output, i+1, ans);//IGNORE THE ITH INDEX ELMNT 
        // include
        int ele = nums[i];//INCLUDING THE ITH INDEX ELMNT IN HERE 
        output.push_back(ele);//SINGLE SUBSET VECTOR BEING PUSHED BACK WITH 
        solve(nums, output, i+1, ans);//N OW TAKING THAT ELMNT INTO CONSIDERATION AND SOLVING 
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;//ANS IS THE 2D VECTOERR STORING ALL POSSIBLE SUBSETS 
        vector<int> output;//OUTPUT IN HERE IS THE INDIVULA SUBSET WHICH IS BEING USED 
        int i = 0;//0TH INDEX IN HERE 
        solve(nums, output, i, ans);//GIVEN VECTOR OUTPUT OR SUBSET VECTOR ITH IS THE INDEX AND ANS IS THE COLLECTION OF ALL SUBSETS 
        return ans;
    }
};

https://leetcode.com/problems/subsets/
