#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector < vector < string >> partition(string s) {
      vector < vector < string > > res;//output set of vector of string]s
      vector < string > path;//one possible partitioning with palindromic partitionings possible 
      partitionHelper(0, s, path, res);//recurssive call
      return res;
    }

  void partitionHelper(int index, string s, vector < string > & path,
    vector < vector < string > > & res){
    if (index == s.size()) {//if index used for traversal reached till the very end then 
      res.push_back(path);//one possible combination obtained push back
      return;//and return gg 
    }
    for (int i = index; i < s.size(); ++i) {//traversing form the presnet index to the very end of the string 
      if (isPalindrome(s, index, i)) {//if is palindrome in between the ind and ith index then do the recurssive call
        path.push_back(s.substr(index, i - index + 1));//push bakc in string the part btw index and i-index+1
        partitionHelper(i + 1, s, path, res);//call the recurssive fnc 
        path.pop_back();//backtracking so tht proper output is obtained and result is taking in all consideration all cases   
      }
    }
  }

  bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
};
https://leetcode.com/problems/palindrome-partitioning/
