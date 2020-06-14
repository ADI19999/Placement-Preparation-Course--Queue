// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends


// Function to print all binary numbers upto n
#include<queue>
vector<string> generate(ll n)
{
	// Your code here
	vector<string> s;
	queue<string> q;
	q.push("1");
	for(int i=1;i<=n;i++)
	{
	    string temp = q.front();
	    q.pop();
	    s.push_back(temp);
	    q.push(temp+"0");
	    q.push(temp+"1");
	}
	return s;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends