//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        map<int,int> mp;

        for(auto x : nums){

            mp[x]++;
        }

        vector<pair<int,int> > vp;
        vector<int> ans;
        for(auto x : mp)
        {
            vp.push_back({x.second,x.first});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        for(auto x : vp)
        {
            ans.push_back(x.second);
            if(ans.size() == k) break;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends