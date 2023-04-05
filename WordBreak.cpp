
class Solution {

map <string,bool> m;//map used for stroing the results of recurssion 
public:
    bool wordBreak(string s, vector<string>& wordDict){
        if(find(wordDict.begin(),wordDict.end(),s)!=wordDict.end())
            return true;//base case same toh 
        if(m.find(s)!=m.end())
            return m[s];//if found means already evaluated before so return the value of it 
        for(int i=1;i<s.size();i++){//trvaersing the string 
            string left = s.substr(0,i);//left part
                 //cout<<left<<"#";
            if(find(wordDict.begin(),wordDict.end(),left)!=wordDict.end() && wordBreak(s.substr(i),wordDict)){
                  m[s]=true;//storing it in the map as true for the particular string part 
                return true;//return true 
            }
        }
   
        m[s]=false;//if nothing happened or not possible then false for the string is stored
        return false;//return the false 
    }
    
};

https://leetcode.com/problems/word-break/
