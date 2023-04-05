//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
unordered_set<string> sn;
unordered_set<string> sn1;

 
// Function for generating the subsequences
void subsequences(char s[], char op[], int i, int j)
{
 
    // Base Case
    if (s[i] == '\0') {
        op[j] = '\0';
 
        // Insert each generated
        // subsequence into the set
        sn.insert(op);
        return;
    }
 
    // Recursive Case
    else {
        // When a particular character is taken
        op[j] = s[i];
        subsequences(s, op, i + 1, j + 1);
 
        // When a particular character isn't taken
        subsequences(s, op, i + 1, j);
        return;
    }
}
    string betterString(char str1[], char str2[]) {
        // code here
        subsequences(char s[], char op[], int i, int j);
        if(c1>=c2){
            return str1;
        }
        else{
            return str2;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends

https://practice.geeksforgeeks.org/problems/better-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=better-string
