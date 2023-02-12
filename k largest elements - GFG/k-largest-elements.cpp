//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n);
	    vector<int>v;
	    int i =0;
	    int j =n-1;
	    while(i<j){
	        swap(arr[i],arr[j]);
	        i++;
	        j--;
	    }
	    for(int a =0;a<k;a++){
	        v.push_back(arr[a]);
	    }
	    return v;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends