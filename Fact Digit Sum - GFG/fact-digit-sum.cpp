//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	    vector<int>f(10);
	    f[0]=1;
	    for(int i =1;i<10;i++){
	        f[i]=f[i-1]*i;
	    }
	    vector<int>ans;
	    for(int i =9;i>0;i--){
	        while(f[i]<=N){
	            N-=f[i];
	            ans.push_back(i);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends