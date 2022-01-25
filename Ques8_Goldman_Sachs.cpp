#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    int mod = 1000000007;
	public:
		int CountWays(string str){
		    // Code here
		    int n = str.length();
		    int count[n+1];
		  //  cout<<mod;
		    count[0] = count[1] = 1;
		    if(str[0]=='0'){
		        return 0;
		    }
		    for(int i=2;i<=n;i++){
		        count[i] = 0;
		        if(str[i-1]>'0'){
		            count[i] = count[i-1]%mod;
		        }
		        
		        if(str[i-2]=='1' || ( str[i-2]=='2' && str[i-1] < '7')){
		            count[i]+=count[i-2]%mod;
		        }
		    }
		    return count[n]%mod;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
