void SortedStack :: sort()
{
   //Your code here
   if(s.empty()) return;
   vector<int> arr;
   while(!s.empty()){
       arr.push_back(s.top());s.pop();
   }
   std::sort(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++){
       s.push(arr[i]);
   }
   
}

class Solution{
public:
    void Reverse(stack<int> &st){
        vector<int> arr;
        while(st.size()>0){
            arr.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }
    }
};
https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-stack
