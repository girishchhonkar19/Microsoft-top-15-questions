// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
	vector<string> ans;
	
	for(int i=1;i<=n;i++)
	{
	  string res;
	  int num=i;
	  while(num>0)
	  {
	      
	      int a=num%2;
	      string s=to_string(a);
	      res+=s;
	      num=num/2;
	  }
	  reverse(res.begin(),res.end());
	  ans.push_back(res);
	}
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends