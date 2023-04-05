class Solution
{
public:

    void f(int ind,int sum,vector<int> &arr,int n,vector<int> &sums){
        if(ind==n){
            sums.push_back(sum);//if index reached till end so push back into the sum 
            return;//return this 
        }
        //pick the element
        f(ind+1,sum+arr[ind],arr,n,sums);//picking the elemnt
        
        //do not pick 
        f(ind+1,sum,arr,n,sums);
        ///take not take ka hi h gg 
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> sums;//sum of the possible subsets
        f(0,0,arr,N,sums);//index sum input array size of inp array and sums which is to be retunred
        sort(sums.begin(),sums.end());//can be returned in sorted fashion if asked so 
        return sums;
        
    }
};

https://practice.geeksforgeeks.org/problems/subset-sums2234/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sums
