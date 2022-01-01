//Ques: Print Anagrams Together LINK --> https://practice.geeksforgeeks.org/problems/print-anagrams-together

//Solution (In GFG): 

//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ret;
        map<string,vector<string>> map_store;
        for(int i=0;i<string_list.size();i++){
            string str = string_list[i];
            sort(str.begin(),str.end());
            map_store[str].push_back(string_list[i]);
        }
        for(auto it = map_store.begin();it!=map_store.end();it++){
            vector<string> temp;
            temp = it->second;
            ret.push_back(temp);
        }
        return ret;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
