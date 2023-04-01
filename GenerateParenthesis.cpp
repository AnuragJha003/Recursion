class Solution {
public:
    
    void helper(vector<string> &v,int n,int oc,int cc,string s){
        if(oc==n && cc==n){//IF OC AND CC ==N THEN U CAN NO LONGER APPLY ANY ADDITIONS SO
            v.push_back(s);//ADD THAT STRING TO THE VECTOR AND S IS ONE POSSIBLE STRING
            return ;//IN FACT THIS ACTS LIKE A BASE FNC TO CHECK THE RECURSSION AND WHEN TO FILL THE VECTOR WITH THE STRING GENERATED
        }
        if(oc<n){//IF OPENING CURVE KAM H SO
            helper(v,n,oc+1,cc,s+"(");//APPEND 1 OC AND ADDITION OF ) TO THE STRING S ND RECURRSIVE CALLING OF THE FUNCTION 
        }
        if(cc<oc){//SAME WIHT CC
            helper(v,n,oc,cc+1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;//RESULTANT VECTOR
        int oc=0;int cc=0;//OPENING AND CLOSING BRACES NUMBER
        helper(v,n,oc,cc,"");//HELPER FUNCTION INVOKDED OT GHENERATE STRING
        return v;
        
    }
};//CODE FOR GENERATION WELL BALANCED STRINGS WITH PARANTHESIS

https://leetcode.com/problems/generate-parentheses/
