//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
void rec(int i,string str,vector<string>&res,string S)
{
    if(i==S.size()-1)
    {
        str+=S[i];
        res.push_back(str);
        return;
    }
    rec(i+1,str+S[i]+" ",res,S);
    rec(i+1,str+S[i],res,S);
}




    vector<string> permutation(string S){
        vector<string> res;
        string str ="";
        rec(0,str,res,S);
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends