

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        // K = K+M-1;
        if(N==1){
            return 1;
        }
        int mod = M%N;
        if(mod==0 && M==K){
        return 1;
        }
        // if(K<N){/
        int ans = K+mod-1;
        return ans > N?ans-N:ans ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
