//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for(int i=0;i<x.length();i++){
            if(!st.empty() && (st.top()==')'||st.top()==']'|| st.top()=='}')){
                return false;
        }else if
    (!st.empty() &&((st.top()=='(' && x[i]==')')||(st.top()=='{' && x[i]=='}')||(st.top()=='[' && x[i]==']'))){
                st.pop();
            }else{
                st.push(x[i]);
            }
        }
        // Your code here
       if(!st.size()){
           return true;
       }
       return false;
        
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends