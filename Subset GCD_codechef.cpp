/* https://www.codechef.com/problems/GCDPERM */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    int l=0,gr=a/b;
	    int j=gr;
	    vector<int> v;
	    while(gr<=a)
	    {
	        v.push_back(gr);
	        l++;
	        if(l==b) break;
	        gr+=j;
	    }
	    for(auto it:v)
	    {
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}

}
