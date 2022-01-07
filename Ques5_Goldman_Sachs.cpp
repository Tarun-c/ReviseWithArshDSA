#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n==1){
	        return 1;
	    }
	    ull prime_2 = 2, prime_3 = 3,prime_5=5;
	    ull i2=0,i3=0,i5=0;
	    ull arr[n+1];
	    arr[0] = 1;
	    for(int i=1;i<n;i++){
	       ull next_ugly = min(prime_2,min(prime_3,prime_5));
	       // cout<<arr[i]<<"\n";
	        arr[i] = next_ugly;
	        if(next_ugly==prime_2){
	            i2++;
	            prime_2 = 2*arr[i2];
	        }
	        if(next_ugly==prime_3){
	            i3++;
	            prime_3 = 3*arr[i3];
	        }
	        if(next_ugly==prime_5){
	            i5++;
	            prime_5 = 5*arr[i5];
	        }
	    }
	    return arr[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
