//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int low,high;
        int start=0,lenofsubstring=1;
        //for even
        for(int i =1;i<S.size();i++)
        {
            low = i-1;
            high = i;
            while(low>=0 && high<S.size() && S[low]==S[high])
            {
                if(lenofsubstring<high-low+1){
                    start=low;
                    lenofsubstring = high-low+1;
                }
                low--;high++;
            }
             //for odd
             low = i-1;
            high = i+1;
            while(low>=0 && high<S.size() && S[low]==S[high])
            {
                if(lenofsubstring<high-low+1){
                    start=low;
                    lenofsubstring = high-low+1;
                }
                low--;high++;
        }
    }
    return S.substr(start,lenofsubstring);
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends