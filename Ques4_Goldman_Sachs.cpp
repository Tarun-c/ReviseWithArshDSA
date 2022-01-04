#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends



string encode(string src)
{     
  string ans = "";
  ans+=src[0];
  if(src.length()==1){
      return src+'1';
  }
  int count=1;
  for(int i=1;i<src.length();i++){
      if(src[i]==src[i-1]){
          count++;
          continue;
      }
      else{
          ans += to_string(count);//-'0';
          count=1;
          ans+=src[i];
      }
  }
  return ans+to_string(count);
}     
 
