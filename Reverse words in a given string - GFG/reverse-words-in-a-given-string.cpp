//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       string ans = "",temp = "";
       for(int i=S.size()-1;i>=0;i--)
       {
           if(S[i]=='.'){
               ans = ans + temp + '.';
               temp = "";
           } else {
               temp = S[i] + temp;
           }
       }
       if(temp.size()>0)
       ans = ans + temp;
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends