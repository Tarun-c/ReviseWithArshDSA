#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count=0;
        int start =0,end=0;
        long long mul = 1;
        for(int i=0;i<a.size();i++)
        {
            mul = mul*a[i];
            while(mul >= k && start <= end)
            {
                mul = mul/a[start];
                start++;
            }
            if (mul < k)
            {
                count += end-start+1;
                end++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
