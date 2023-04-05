class Solution{

	public:
int mod = 1e9+7;
    int f(int ind, int arr[], int n, int sum, vector<vector<long>> &dp)
    {
         if(ind == 0)
         {
            if(sum==0 and arr[0]==0) return 2;
            if(sum==0 or sum==arr[0]) return 1;
            return 0;
        }
        
        //if(sum == 0 && ind == 0)return 1;
        // if(sum < 0 || ind <= 0)return 0;
         
         if(dp[ind][sum] != -1)     return dp[ind][sum]%mod;
         
         int not_pick = f(ind-1,arr,n,sum,dp)%mod;
         
         int pick = 0;
         
         if(arr[ind]<=sum){
             pick= f(ind-1,arr,n,sum-arr[ind],dp)%mod;
         }
         
         return dp[ind][sum] = (pick + not_pick)%mod; 
    }
    
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<long>> dp(n,vector<long>(sum+1,-1));
        return f(n-1,arr,n,sum,dp)%mod;
	}
	  
};
https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=perfect-sum-problem
