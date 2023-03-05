//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void rec(int i,vector<string> &res, string S){
        if(i>=S.size())
        {
           res.push_back(S);
            return; 
        }
        
        for(int j=i; j<S.size(); j++)
        {
            swap(S[i], S[j]);
            
            rec(i+1, res, S);
            
            // bracktrak
            swap(S[i], S[j]);
        }

    }
    vector<string> permutation(string S)
    {
        vector<string> res;
        rec(0 ,res, S);
        
        sort(res.begin(), res.end());
        
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends